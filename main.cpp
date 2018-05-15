#include <iostream>
#include <vector>
#include "headers/tela.h"
#include "headers/retangulo.h"
#include "headers/leitor.h"

#include <sstream>
#include <string>
using namespace std;

int main()
{
    Tela tela;
    Leitor leitor("/home/diego/projetos/desenhos/desenho.txt");
    leitor.despejar(tela);
    tela.pincelar(1,1);

    cout<<tela;
    return 0;
}
