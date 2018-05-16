#include "headers/figurageometrica.h"
#include "headers/tela.h"
#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo : public FiguraGeometrica
{
    int x_centro, y_centro, raio;
public:
    /**
     * @brief Construtor da classe
     * @param xc coordenada x do centro do circulo
     * @param yc coordenada y do centro do circulo
     * @param r raio do circulo
     */
    Circulo(int xc, int yc, int r);
    /**
     * @brief desenha na tela
     * @param t tela a ser desenhada
     * @param fillmode se é pra preencer (1) ou nao
     */
    void draw(Tela &t, bool fillmode=1);
};

#endif // CIRCULO_H
