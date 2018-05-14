#include "headers/tela.h"
#include "headers/figurageometrica.h"
#ifndef RETA_H
#define RETA_H


class Reta : public FiguraGeometrica
{
public:
    Reta(int _xi, int _yi, int _xf, int _yf);
    void draw(Tela &t);
};

#endif // RETA_H
