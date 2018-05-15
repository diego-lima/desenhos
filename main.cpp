#include <iostream>
#include <vector>
#include "headers/tela.h"
#include "headers/reta.h"
using namespace std;

int main()
{
    Tela t(10,10,'a');
    t.pincel('-');
    Reta r(0,0,5,5);
    r.draw(t);

//    t.pincelar(1,1);
    cout<<t;
//    cout << "Hello World!" << endl;
//    t.limpar();
//    cout<<t;
    return 0;
}
