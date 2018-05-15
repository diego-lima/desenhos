#include <iostream>
#include <vector>
#include "headers/tela.h"
#include "headers/retangulo.h"
#include "headers/leitor.h"

#include <sstream>
#include <string>
#include "headers/circulo.h"
using namespace std;

int main()
{
    Tela tela;
    Leitor leitor("/home/diego/projetos/desenhos/figuras.txt");
    leitor.despejar(tela);
    tela.pincelar(1,1);

    Circulo r(15,5,6);
    r.draw(tela,1);

    cout<<tela;
    return 0;
}
