#include "headers/tela.h"
#include "headers/figurageometrica.h"
#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo : public FiguraGeometrica
{
    int x,y,altura,largura;
public:
    Retangulo(int _xi, int _yi, int alt, int larg);
    void draw(Tela &t);
};

#endif // RETANGULO_H
