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
    Tela tela;

    // Verifica se o arquivo está tudo em ordem
    Leitor leitor("/home/diego/projetos/desenhos/figuras.txt");
    // Interpreta o texto dentro do arquivo e modifica a tela, criando
    // figuras
    leitor.despejar(tela);

    // Seta um pixel
    tela.pincelar(8,7);

    // Cria um retangulo
    Retangulo(0,4,2,2).draw(tela);


    cout<<tela;
    tela.escrever_arquivo("/home/diego/projetos/desenhos/arquivo.txt");
    return 0;
}
