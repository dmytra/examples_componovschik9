QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
CONFIG += mobility
MOBILITY += sensors

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    flower1.cpp \
    flower2.cpp \
    flower3.cpp \
    flower4.cpp \
    flower5.cpp \
    flower6.cpp \
    flowerall.cpp \
    flowerbg.cpp \
    main.cpp \
    widget.cpp

HEADERS += \
    flower1.h \
    flower2.h \
    flower3.h \
    flower4.h \
    flower5.h \
    flower6.h \
    flowerall.h \
    flowerbg.h \
    widget.h

FORMS += \
    flower1.ui \
    flower2.ui \
    flower3.ui \
    flower4.ui \
    flower5.ui \
    flower6.ui \
    flowerall.ui \
    flowerbg.ui \
    widget.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
    res.qrc

contains(ANDROID_TARGET_ARCH,x86_64) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}

contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}

contains(ANDROID_TARGET_ARCH,armeabi-v7a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}

