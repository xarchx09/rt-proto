TARGET += rt_sky
CONFIG += qt debug x11 app warn_off
QT += gui core widgets

DEFINES += _USE_MATH_DEFINES _CRT_NO_SECURE_WARNINGS

INCLUDEPATH += "$(ProjectDir)\src" "$(ProjectDir)\src\Core"

HEADERS += src/*.h

SOURCES += main.cpp src/*.cpp

