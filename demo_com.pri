CONFIG -= qt
CONFIG += stl_off  
CONFIG += debug_and_release
!CONFIG(DISABLE_WCHAR){
	#��wchar_tΪ��������
	QMAKE_CXXFLAGS += /Zc:wchar_t
}

!CONFIG(MBCS){
	CharacterSet = 1
}
else{
	CharacterSet = 2
	DEFINES -= UNICODE
}

CONFIG(USING_MT){
	#ʹ��MT����CRT
	QMAKE_CXXFLAGS_RELEASE += /MT
	QMAKE_CXXFLAGS_DEBUG += /MTd
}

CONFIG(debug, debug|release) {
	OBJECTS_DIR =   debug
	DESTDIR = debug
}
else {
	OBJECTS_DIR =   release
	DESTDIR = release
}

CONFIG(x64){
	OBJECTS_DIR = $$OBJECTS_DIR"64"
	DESTDIR = $$DESTDIR"64"
}

CONFIG(x64){
	QMAKE_LFLAGS += /MACHINE:X64
	DEFINES -= WIN32
	DEFINES += _WIN64
             LIBPATH += $(SOUI4PATH)/bin64
}
else{
	QMAKE_LFLAGS += /MACHINE:X86
             LIBPATH += $(SOUI4PATH)/bin
}
#��˱���
QMAKE_CXXFLAGS += /MP
QMAKE_CXXFLAGS += -Fd$(IntDir)

DEPENDPATH += .
INCLUDEPATH += . \
			   $(SOUI4PATH)/utilities/include \
			   $(SOUI4PATH)/soui/include \
			   $(SOUI4PATH)/components \
			   $(SOUI4PATH)/config


CONFIG(debug,debug|release){
	LIBS += utilities4d.lib soui4d.lib
}
else{
	LIBS += utilities4.lib soui4.lib
}