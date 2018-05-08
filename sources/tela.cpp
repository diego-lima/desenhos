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

ostream& operator<<(ostream &os, Tela &t){
    for(int i = 0; i < t.linhas; i++){
        for(int j = 0; j < t.colunas; j++){
            cout<<t.matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return os;
}
