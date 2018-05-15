#include <iostream>
#include <vector>
#include "headers/tela.h"
#include "headers/circulo.h"
using namespace std;

int main()
{
    Tela t(10,10,'-');
    t.pincel('*');
    Circulo r(5,5,2);
    r.draw(t,1);

//    t.pincelar(1,1);
    cout<<t;
//    cout << "Hello World!" << endl;
//    t.limpar();
//    cout<<t;
    return 0;
}
