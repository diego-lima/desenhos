#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "headers/leitor.h"

using namespace std;

Leitor::Leitor(char* caminho){
    if (caminho == "") throw "caminho do arquivo nao especificado";

    ifstream arquivo;
    string token;

    arquivo.open(caminho);

    if(!arquivo.is_open()){

        cout<<"nao foi possivel abrir arquivo"<<endl;
        exit(0);
    }

    _arquivo = caminho;

    arquivo.close();
}

void Leitor::despejar(Tela &tela){
    ifstream arquivo;
    string linha;

    arquivo.open(_arquivo);

    while(arquivo.good()){
        getline(arquivo, linha);
        if (arquivo.good()){
            string token;
            stringstream sstream(linha);
            sstream >> token;

            if (token.compare("dim") == 0){
                int x,y;
                char p;
                sstream >> x >> y >> p;
                if(p==0) p = ' ';
                tela.ajustar_dimensoes(x, y, p);
            }

            if(!tela.status()){
                /* Aqui, a tela já deve estar com status OK.
                 * Se não está, encerre programa
                 */
                cout<<"Algo errado com as dimensões da tela.\n";
                exit(0);
            }

            if (token.compare("brush") == 0){
                char p;
                sstream >> p;
                sstream >> p;
                if(p==0 || p==3) p = ' ';
                tela.pincel(p);

            }

        }
    }


    arquivo.close();
}
