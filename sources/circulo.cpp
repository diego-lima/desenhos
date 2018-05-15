#include "headers/circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(int xc, int yc, int r)
{
    x_centro = xc;
    y_centro = yc;
    raio = r;
}
void drawCircle(int x, int y, int xc, int yc, Tela &t, bool fillmode)
{
    if (fillmode){
        for (int i=-y; i<=y; i++){
            t.pincelar(x+xc,i+yc);
            t.pincelar(-x+xc,i+yc);
        }
        for (int i=-x; i<=x; i++){
            t.pincelar(y+xc, i+yc);
            t.pincelar(-y+xc, i+yc);
        }
    }
    else{
        t.pincelar(x+xc,y+yc);
        t.pincelar(x+xc, -y+yc);
        t.pincelar(-x+xc,y+yc);
        t.pincelar(-x+xc, -y+yc);
        t.pincelar(y+xc, x+yc);
        t.pincelar(y+xc, -x+yc);
        t.pincelar(-y+xc, x+yc);
        t.pincelar(-y+xc, -x+yc);
    }
}
void Circulo::draw(Tela &t, bool fillmode){
    int r=raio, xc=x_centro, yc=y_centro, pk, x, y;
    pk = 3 - 2*r;
    x=0; y = r;
    drawCircle(x,y,xc,yc, t, fillmode);
    while(x < y)
    {
        if(pk <= 0)
        {
            pk = pk + (4*x) + 6;
            drawCircle(++x,y,xc,yc, t, fillmode);
        }
        else
        {
            pk = pk + (4*(x-y)) + 10;
            drawCircle(++x,--y,xc,yc, t, fillmode);
        }
    }

}
