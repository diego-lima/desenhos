#include "headers/figurageometrica.h"
#include "headers/tela.h"
#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo : public FiguraGeometrica
{
    int x_centro, y_centro, raio;
public:
    Circulo(int xc, int yc, int r);
    void draw(Tela &t, bool fillmode=1);
};

#endif // CIRCULO_H
