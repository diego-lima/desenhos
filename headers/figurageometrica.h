#include "headers/tela.h"
#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H


class FiguraGeometrica
{
public:
  FiguraGeometrica();
  /**
   * @brief O metodo draw será implementado pelas classes filhas
   */
  virtual void draw(Tela &t, bool fillmode)=0;
};

#endif // FIGURAGEOMETRICA_H
