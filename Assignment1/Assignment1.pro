TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += sdk_no_version_check


SOURCES += \
        abstractcreature.cpp \
        alchemistslaboratory.cpp \
        basicdungeonlevel.cpp \
        basicdungeonlevelbuilder.cpp \
        blockeddoorway.cpp \
        consumable.cpp \
        doorway.cpp \
        dungeonlevel.cpp \
        dungeonlevelbuilder.cpp \
        enchantedlibrary.cpp \
        game.cpp \
        item.cpp \
        lockeddoor.cpp \
        magicaldungeonlevel.cpp \
        magicaldungeonlevelbuilder.cpp \
        magicwall.cpp \
        main.cpp \
        menuinterface.cpp \
        onewaydoor.cpp \
        opendoorway.cpp \
        quartzchamber.cpp \
        rockchamber.cpp \
        rockwall.cpp \
        room.cpp \
        roomedge.cpp \
        wall.cpp \
        weapon.cpp

HEADERS += \
    abstractcreature.h \
    alchemistslaboratory.h \
    basicdungeonlevel.h \
    basicdungeonlevelbuilder.h \
    blockeddoorway.h \
    consumable.h \
    doorway.h \
    dungeonlevel.h \
    dungeonlevelbuilder.h \
    enchantedlibrary.h \
    game.h \
    item.h \
    lockeddoor.h \
    magicaldungeonlevel.h \
    magicaldungeonlevelbuilder.h \
    magicwall.h \
    menuinterface.h \
    onewaydoor.h \
    opendoorway.h \
    quartzchamber.h \
    rockchamber.h \
    rockwall.h \
    room.h \
    roomedge.h \
    wall.h \
    weapon.h
