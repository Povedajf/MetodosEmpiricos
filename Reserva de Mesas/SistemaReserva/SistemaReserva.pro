QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS
SOURCES += \
    dubasedatos.cpp \
    main.cpp \
    mainwindow.cpp \
    reservaabcdialog.cpp

HEADERS += \
    dubasedatos.h \
    mainwindow.h \
    reservaabcdialog.h

FORMS += \
    mainwindow.ui \
    reservaabcdialog.ui

QMAKE_CXXFLAGS += -std=gnu++14


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    restaurante.qrc
