QT       += core gui
QT += network
QT += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    channel.cpp \
    dialog_login.cpp \
    dialog_signin.cpp \
    group.cpp \
    main.cpp \
    messenger.cpp \
    privatechat.cpp \
    safheasli.cpp \
    user.cpp

HEADERS += \
    channel.h \
    dialog_login.h \
    dialog_signin.h \
    group.h \
    messenger.h \
    privatechat.h \
    safheasli.h \
    user.h

FORMS += \
    dialog_login.ui \
    dialog_signin.ui \
    messenger.ui \
    safheasli.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
