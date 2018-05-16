#include <iostream>
#include <vector>
#include "headers/tela.h"
#include "headers/retangulo.h"
#include "headers/leitor.h"

#include <sstream>
#include <string>
#include "headers/circulo.h"
#include "headers/reta.h"
using namespace std;

int main()
{
//    Tela tela(10, 40);
    Tela tela;
    Leitor leitor("/home/diego/projetos/desenhos/figuras.txt");
    leitor.despejar(tela);

    Retangulo(0,4,1,1).draw(tela);


    cout<<tela;
    return 0;
}
