#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "headers/leitor.h"
#include "headers/reta.h"
#include "headers/retangulo.h"
#include "headers/circulo.h"


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
//                char c;
                sstream >> x >> y ;
                // @= BUG
//                sstream >> c;
//                if(c==0) c = ' ';
                tela.ajustar_dimensoes(x, y, ' ');
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
                // @= BUG
                if(p==0 || p==3) p = ' ';
                tela.pincel(p);

            }

            if (token.compare("line") == 0){
                int xi, yi;
                int xf, yf;

                sstream >> xi >> yi >> xf>> yf;

                Reta(xi,yi,xf,yf).draw(tela);

            }

            if (token.compare("rectangle") == 0){
                int x,y,largura,altura;

                sstream >> x >> y >> largura >> altura;

                Retangulo(x,y,altura,largura).draw(tela);

            }

            if (token.compare("circle") == 0){
                int x,y,r;

                sstream >> x >> y >> r;

                Circulo(x,y,r).draw(tela);

            }

        }
    }


    arquivo.close();
}
