#include "headers/tela.h"
#include "headers/figurageometrica.h"
#ifndef RETA_H
#define RETA_H


class Reta : public FiguraGeometrica
{
    int x_ini, x_fim, y_ini, y_fim;
public:
    Reta(int _xi, int _yi, int _xf, int _yf);
    void draw(Tela &t, bool fillmode=0);
};

#endif // RETA_H
