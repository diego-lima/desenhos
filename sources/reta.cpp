#include "headers/reta.h"
#include <cmath>
#include <iostream>
using namespace std;
Reta::Reta(int _xi, int _yi, int _xf, int _yf)
{
    x_ini = _xi;
    y_ini = _yi;
    x_fim = _xf;
    y_fim = _yf;
}
void Reta::draw(Tela &t, bool fillmode){
   int x1=x_ini, x2=x_fim, y1=y_ini, y2=y_fim;

           // Bresenham's line algorithm
     const bool steep = (fabs(y2 - y1) > fabs(x2 - x1));
     if(steep)
     {
       std::swap(x1, y1);
       std::swap(x2, y2);
     }

     if(x1 > x2)
     {
       std::swap(x1, x2);
       std::swap(y1, y2);
     }

     const float dx = x2 - x1;
     const float dy = fabs(y2 - y1);

     float error = dx / 2.0f;
     const int ystep = (y1 < y2) ? 1 : -1;
     int y = (int)y1;

     const int maxX = (int)x2;

     for(int x=(int)x1; x<maxX; x++)
     {
       if(steep)
       {
           t.pincelar(y,x);
       }
       else
       {
           t.pincelar(x,y);
       }

       error -= dy;
       if(error < 0)
       {
           y += ystep;
           error += dx;
       }
     }
}
