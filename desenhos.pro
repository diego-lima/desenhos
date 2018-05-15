TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    sources/tela.cpp \
    sources/figurageometrica.cpp \
    sources/reta.cpp \
    sources/retangulo.cpp \
    sources/circulo.cpp \
    sources/leitor.cpp

HEADERS += \
    headers/tela.h \
    headers/figurageometrica.h \
    headers/reta.h \
    headers/retangulo.h \
    headers/circulo.h \
    headers/leitor.h
