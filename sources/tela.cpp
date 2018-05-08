#include <iostream>
#include <vector>
#include <fstream>
#include "headers/tela.h"


using namespace std;

Tela::Tela(int nl, int nc, char p){
    if(nc <= 0 || nl <= 0){
        throw "dim com valor invalido";
    }
    linhas = nl;
    colunas = nc;

    matriz = vector<vector<char>>(nl, vector<char>(nc, p));


}

void Tela::pincelar(int x, int y){
    if (x < 0 || y < 0 || x > linhas || y > linhas){
        throw "pintura fora da tela";
    }

    matriz[x][y] = _pincel;
}

void Tela::pincel(char p){
    _pincel = p;
}

ostream& operator<<(ostream &os, Tela &t){
    for(int i = 0; i < t.linhas; i++){
        for(int j = 0; j < t.colunas; j++){
            cout<<t.matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return os;
}
