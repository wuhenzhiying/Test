QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

include(network/network.pri)
include(dataHandle/dataHandle.pri)
