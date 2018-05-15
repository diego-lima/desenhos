#include <iostream>
#include <vector>
#include <fstream>
#include "headers/tela.h"


using namespace std;

Tela::Tela(){
    _status = false;
}

Tela::Tela(int nl, int nc, char p){
    if(nc <= 0 || nl <= 0){
        _status = false;
        return;
    }
    linhas = nl;
    colunas = nc;

    matriz = vector<vector<char>>(nl, vector<char>(nc, p));

    _status = true;

}

void Tela::ajustar_dimensoes(int nl, int nc, char p){
    if(nc <= 0 || nl <= 0){
        cout<<"dimensoes invalidas"<<endl;
        exit(0);
    }

    linhas = nl;
    colunas = nc;

    matriz = vector<vector<char>>(nl, vector<char>(nc, p));

    _status = true;
}

void Tela::pincelar(int x, int y){
    if (x < 0 || y < 0 || x >= colunas || y >= linhas){
        return;
    }

    matriz[y][x] = _pincel;
}

void Tela::pincel(char p){
    _pincel = p;
}

void Tela::limpar(){
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j]=' ';
        }
    }
}

bool Tela::status(void){
    return _status;
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
