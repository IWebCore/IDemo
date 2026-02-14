CONFIG += c++11

SOURCES += \
    main.cpp

include($$(IQMakeCore))
IQMakeCoreInit()
include($$PWD/.package.pri)