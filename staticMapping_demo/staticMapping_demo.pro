QT = core

CONFIG += c++17 cmdline

SOURCES += \
        main.cpp

win32 {
    DEFINES += _WIN32_WINNT=0x0A00
    LIBS += -lws2_32
    LIBS += -lmswsock
}

include($$(IQMakeCore))
IQMakeCoreInit()
include($$PWD/.package.pri)

RESOURCES += \
    resource.qrc
