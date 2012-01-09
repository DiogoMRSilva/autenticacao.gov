######################################################################
# Automatically generated by qmake (2.01a) Thu Dec 13 11:55:05 2007
######################################################################


include(../_Builds/eidcommon.mak)

TEMPLATE = lib
TARGET = $${COMMONLIB}
VERSION = $${COMMONLIB_MAJ}.$${COMMONLIB_MIN}.$${COMMONLIB_REV}

message("Compile $$TARGET")

###
### Installation setup
###
target.path = $${INSTALL_DIR_LIB}
INSTALLS += target

SRCDIR = .
OBJECT_DIR = ..

###
### Compiler setup
###
CONFIG -= qt warn_on no_lflags_merge


## destination directory for the compiler
DESTDIR = ../lib

DEFINES += EIDMW_CMN_EXPORT 
## About !macx see _Builds/pteidcommon.mak.max
unix:!macx: DEFINES += USING_DL_OPEN

macx: LIBS += -Wl,-framework -Wl,Carbon

PROJECT_DIR = common

DEPENDPATH += $${PROJECT_DIR} libtomcrypt Socket
INCLUDEPATH += $${PROJECT_DIR} $${PROJECT_DIR}/libtomcrypt $${PROJECT_DIR}/Socket $${PCSC_INCLUDE_DIR}

QMAKE_CFLAGS_DEBUG += -O

# Input
HEADERS += ByteArray.h \
           Config.h \
           datafile.h \
           ThreadDefines.h \
           DynamicLib.h \
           eidmwErrors.h \
           Export.h \
           Hash.h \
           Log.h \
           LogBase.h \
           Mutex.h \
           MWException.h \
           Thread.h \
           TLV.h \
           TLVBuffer.h \
           Util.h \
           win_macros.h \
           prefix.h \
           StringOps.h \
           xmlUserData.h \
           libtomcrypt/tomcrypt_argchk.h \
           libtomcrypt/tomcrypt_cfg.h \
           libtomcrypt/tomcrypt_hash.h \
           libtomcrypt/tomcrypt_macros.h \
           Socket/Socket.h \
           Socket/SocketClient.h \
           Socket/SocketServer.h

SOURCES += ByteArray.cpp \
           ByteArrayReader.cpp \
           ConfigCommon.cpp \
           Config.cpp \
           datafile.cpp \
           DynamicLib.cpp \
           Hash.cpp \
           Log.cpp \
           LogBase.cpp \
           Mutex.cpp \
           MWException.cpp \
           Thread.cpp \
           TLV.cpp \
           TLVBuffer.cpp \
           Util.cpp \
           StringOps.cpp \
           libtomcrypt/md5.c \
           libtomcrypt/sha1.c \
           libtomcrypt/sha256.c \
           libtomcrypt/sha384.c \
           libtomcrypt/sha512.c \
	   libtomcrypt/rmd160.c \
           Socket/Socket.cpp \
           Socket/SocketClient.cpp \
           Socket/SocketServer.cpp 
