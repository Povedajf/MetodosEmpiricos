QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += \
    clienteabcdialog.cpp \
    dubasedatos.cpp \
    main.cpp \
    mainwindow.cpp \
    menuabcdialog.cpp \
    reservaabcdialog.cpp

HEADERS += \
    clienteabcdialog.h \
    dubasedatos.h \
    mainwindow.h \
    menuabcdialog.h \
    reservaabcdialog.h

FORMS += \
    clienteabcdialog.ui \
    mainwindow.ui \
    menuabcdialog.ui \
    reservaabcdialog.ui

QMAKE_CXXFLAGS += -std=gnu++14


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    restaurante.qrc
