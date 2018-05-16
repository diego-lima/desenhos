#include "headers/tela.h"
#include "headers/figurageometrica.h"
#ifndef RETA_H
#define RETA_H


class Reta : public FiguraGeometrica
{
    int x_ini, x_fim, y_ini, y_fim;
public:
    /**
     * @brief construtor da classe
     * @param _xi coordenada x do ponto inicial
     * @param _yi coordenada y do ponto inicial
     * @param _xf coordenada x do ponto final
     * @param _yf coordenada y do ponto final
     * @param fillmode se é pra preencer (1) ou nao
     */
    Reta(int _xi, int _yi, int _xf, int _yf);
    void draw(Tela &t, bool fillmode=0);
};

#endif // RETA_H
