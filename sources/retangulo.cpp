#include "headers/retangulo.h"

Retangulo::Retangulo(int _xi, int _yi, int alt, int larg)
{
    x=_xi;
    y=_yi;
    altura=alt;
    largura=larg;
}
void Retangulo::draw(Tela &t, bool fillmode){
    if (fillmode){
        for (int i=0; i<largura; i++){
            for(int j=0; j<altura; j++){
                t.pincelar(x+i, y+j);
            }
        }
    }
    else{
        for (int i=0; i<largura; i++){
            for(int j=0; j<altura; j++){
                if(i==0||i==(largura-1)||j==0||j==(altura-1))
                    t.pincelar(x+i, y+j);
            }
        }
    }
}
