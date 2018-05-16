#include "headers/tela.h"
#include "headers/figurageometrica.h"
#ifndef RETANGULO_H
#define RETANGULO_H


class Retangulo : public FiguraGeometrica
{
    int x,y,altura,largura;
public:
    /**
     * @brief construtor da classe
     * @param _xi coordenada x do ponto inicial
     * @param _yi coordenada y do ponto inicial
     * @param alt altura
     * @param larg largura
     */
    Retangulo(int _xi, int _yi, int alt, int larg);
    void draw(Tela &t, bool fillmode=1);
};

#endif // RETANGULO_H
