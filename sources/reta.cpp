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
   int x1=x_ini, x2=x_fim, y1=y_ini, y2=y_fim, Tamanho, i=0;
//   int x = x1, y = y1, Delta_x, Delta_y, s1, s2, Temp, Troca, new_e;
//    Delta_x = abs(x2 - x1);
//    Delta_y = abs(y2 - y1);
//    s1=(x2 - x1);
//    s2=(y2 - y1);
//    if(Delta_y > Delta_x){
//      Temp = Delta_x;
//      Delta_x = Delta_y;
//      Delta_y = Temp;
//      Troca = 1;
//    }
//    else{
//      Troca = 0;
//    }
//    new_e = 2*Delta_y - Delta_x;
//    for(i=1; i<= Delta_x; i++){
//        cout<<i<<endl;
//      t.pincelar(x,y);
//      while (new_e >= 0){
//        if(Troca == 1){
//          //Muda para a proxima linha de rasterização
//          x = x + s1;
//        }
//        else{
//          y = y + s2;
//        }
//        new_e = new_e - 2*Delta_x;
//      }

//      //Permanece nesta linha de rasterização
//      if(Troca == 1){
//        y = y + s2;
//      }
//      else{
//        x = x + s1;
//      }
//      new_e= new_e + 2*Delta_y;
//    }
   float Delta_x, Delta_y, x=x_ini, y=y_ini;
    // Tamanho: Aproxima o tamanho da reta
     if( abs(x2 - x1) > abs(y2 - y1))
          Tamanho = abs(x2 - x1);
     else
          Tamanho = abs(y2 - y1);
     //seleciona o maior dos valores entre Delta_x e Delta_y como unidade de rasterização
     Delta_x = float(x2 - x1)/Tamanho;
     Delta_y = float(y2 - y1)/Tamanho;
     i = 1;
     while(i < Tamanho){
     //round: valor arredondado de um dado número real. round(-8.6) = -9; round(-8.4) = -8
       t.pincelar(round(x), round(y));
       x = x + Delta_x;
       y = y + Delta_y;
       i = i + 1;
     }
}
