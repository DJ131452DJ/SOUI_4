######################################################################
# Automatically generated by qmake (3.0) ?? 5? 7 17:13:50 2020
######################################################################

TEMPLATE = lib
TARGET = utilities
CONFIG(x64){
TARGET = $$TARGET"64"
}
INCLUDEPATH += .
INCLUDEPATH += ./include

dir = ..
include($$dir/common.pri)

!LIB_ALL:!LIB_CORE{
	DEFINES += UTILITIES_EXPORTS
	RC_FILE += utilities.rc
	CONFIG += dll
}
else{
    CONFIG += staticlib
}


# Input
HEADERS += resource.h \
           include/com-loader.hpp \
           include/gdialpha.h \
           include/sdef.h \
           include/snew.h \
           include/soui_mem_wrapper.h \
           include/souicoll.h \
           include/trace.h \
           include/utilities-def.h \
           include/utilities.h \
           include/atl.mini/atldef.h \
           include/atl.mini/SComCli.h \
           include/atl.mini/SComHelper.h \
           include/helper/SAutoBuf.h \
           include/helper/SCriticalSection.h \
           include/helper/SEmptyable.hpp \
           include/helper/SNoCopyable.hpp \
           include/helper/SSemaphore.h \
           include/helper/SSharedPtr.hpp \
           include/interface/sstring-i.h \
           include/interface/sxml-i.h \
           include/pugixml/pugiconfig.hpp \
           include/pugixml/pugixml.hpp \
           include/string/sstringa.h \
           include/string/sstringdata.h \
           include/string/sstringw.h \
           include/string/strcpcvt.h \
           include/string/tstring.h \
           include/wtl.mini/msgcrack.h \
           include/wtl.mini/souimisc.h \
           include/xml/sxml.h \

SOURCES += src/gdialpha.cpp \
           src/soui_mem_wrapper.cpp \
           src/trace.cpp \
           src/utilities.cpp \
           src/helper/SAutoBuf.cpp \
           src/helper/SCriticalSection.cpp \
           src/helper/SSemaphore.cpp \
           src/pugixml/pugixml.cpp \
           src/string/sstringa.cpp \
           src/string/sstringdata.cpp \
           src/string/sstringw.cpp \
           src/string/strcpcvt.cpp \
           src/xml/sxml.cpp
