TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        abstractcreature.cpp \
        consumable.cpp \
        direction.cpp \
        dungeonlevel.cpp \
        dungeonlevelbuilder.cpp \
        game.cpp \
        item.cpp \
        main.cpp \
        menuinterface.cpp \
        room.cpp \
        roomedge.cpp \
        weapon.cpp

HEADERS += \
    abstractcreature.h \
    consumable.h \
    direction.h \
    dungeonlevel.h \
    dungeonlevelbuilder.h \
    game.h \
    item.h \
    menuinterface.h \
    room.h \
    roomedge.h \
    weapon.h
