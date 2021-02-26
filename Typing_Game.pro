TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        entities.cpp \
        main.cpp \
        typingPrompt.cpp

HEADERS += \
    entities.h \
    typingPrompt.h

DISTFILES += \
    wordsList.txt
