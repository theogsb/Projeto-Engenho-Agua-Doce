QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    tela_adicionar.cpp \
    tela_cadastro.cpp \
    tela_editar_nome.cpp \
    tela_principal.cpp \
    tela_retirar.cpp

HEADERS += \
    mainwindow.h \
    tela_adicionar.h \
    tela_cadastro.h \
    tela_editar_nome.h \
    tela_principal.h \
    tela_retirar.h

FORMS += \
    mainwindow.ui \
    tela_adicionar.ui \
    tela_cadastro.ui \
    tela_editar_nome.ui \
    tela_principal.ui \
    tela_retirar.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    how_to_run
