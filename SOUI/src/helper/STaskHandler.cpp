#include <souistd.h>
#include <helper/STaskHandler.h>

SNSBEGIN

STaskHandler::STaskHandler()
    : m_taskListLock()
    , m_items()
    , m_nextTaskID(0)
{
    m_dwThreadID = GetCurrentThreadId();
}

STaskHandler::~STaskHandler()
{
    stop();
}

void STaskHandler::start(const char *pszName, Priority priority)
{
    SAutoLock autoLock(m_taskListLock);
    if (isRunning())
        return;
    TCHAR szBuf[101];
#ifdef _UNICODE
    int nLen = MultiByteToWideChar(CP_ACP, 0, pszName, (int)strlen(pszName), szBuf, 100);
    szBuf[nLen] = 0;
#else
    strcpy_s(szBuf, 100, pszName);
#endif
    CreateNative(szBuf, WS_POPUP, 0, 0, 0, 0, 0, HWND_MESSAGE, 0, NULL);
}

void STaskHandler::stop()
{
    SAutoLock autoLock(m_taskListLock);
    if (IsWindow())
        DestroyWindow();

    SPOSITION pos = m_items.GetStartPosition();
    while (pos)
    {
        IRunnable *p = m_items.GetNextValue(pos);
        p->Release();
    }
    m_items.RemoveAll();
}

BOOL STaskHandler::isRunning()
{
    return IsWindow();
}

long STaskHandler::postTask(const IRunnable *runnable, BOOL waitUntilDone, int priority)
{
    IRunnable *pCloneRunnable = runnable->clone();
    if (GetCurrentThreadId() == m_dwThreadID && waitUntilDone)
    {
        pCloneRunnable->run();
        pCloneRunnable->Release();
        return -1;
    }
    SAutoLock autoLock(m_taskListLock);
    if (!isRunning())
    {
        return -1;
    }

    m_items[m_nextTaskID] = pCloneRunnable;
    if (waitUntilDone)
    {
        SendMessage(UM_RUN_TASK, m_nextTaskID++, (LPARAM)pCloneRunnable);
        return -1;
    }
    else
    {
        PostMessage(UM_RUN_TASK, m_nextTaskID++, (LPARAM)pCloneRunnable);
        return m_nextTaskID;
    }
}

LRESULT STaskHandler::OnRunTask(UINT uMsg, WPARAM wp, LPARAM lp)
{
    SAutoLock autoLock(m_taskListLock);
    if (m_items.Lookup((long)wp) != NULL)
    {
        IRunnable *pRunnable = (IRunnable *)lp;
        pRunnable->run();
        pRunnable->Release();
        m_items.RemoveKey((long)wp);
    }
    return 0;
}

BOOL STaskHandler::getName(char *pszBuf, int nBufLen)
{
    if (!isRunning())
        return false;
    ::GetWindowTextA(m_hWnd, pszBuf, nBufLen);
    return true;
}

void STaskHandler::cancelTasksForObject(void *object)
{
    if (object == NULL)
    {
        return;
    }
    SAutoLock autoLock(m_taskListLock);
    SPOSITION pos = m_items.GetStartPosition();
    while (pos)
    {
        SPOSITION posPrev = pos;
        IRunnable *p = m_items.GetNextValue(pos);
        if (p->getObject() == object)
        {
            m_items.RemoveAtPos(posPrev);
            p->Release();
        }
    }
}

BOOL STaskHandler::cancelTask(long taskId)
{
    SAutoLock autoLock(m_taskListLock);
    SPOSITION pos = m_items.GetStartPosition();
    while (pos)
    {
        SPOSITION posPrev = pos;
        long key = 0;
        IRunnable *p = NULL;
        m_items.GetNextAssoc(pos, key, p);
        if (key == taskId)
        {
            m_items.RemoveAtPos(posPrev);
            p->Release();
            return true;
        }
    }
    return false;
}

int STaskHandler::getTaskCount() const
{
    SAutoLock autoLock(m_taskListLock);
    return (int)m_items.GetCount();
}

BOOL STaskHandler::getRunningTaskInfo(char *buf, int bufLen)
{
    return false;
}

void STaskHandler::setHeartBeatTask(IRunnable *pTask, int intervel)
{
}

SNSEND
