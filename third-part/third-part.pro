TEMPLATE = subdirs
TARGET = third-part
CONFIG(x64){
TARGET = $$TARGET"64"
}
DEPENDPATH += .
INCLUDEPATH += .

SUBDIRS += gtest
SUBDIRS += png
SUBDIRS += skia
SUBDIRS += zlib
SUBDIRS += lua-54
SUBDIRS += smiley
SUBDIRS += mhook
SUBDIRS += 7z
SUBDIRS += scintilla
SUBDIRS += sqlite3
SUBDIRS += jsoncpp
CONFIG(c++11){

}
