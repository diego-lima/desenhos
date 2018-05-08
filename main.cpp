#include <iostream>
#include <vector>
#include "headers/tela.h"

using namespace std;

int main()
{
    Tela t(2,2,'@');
    t.pincel('-');
    t.pincelar(1,1);
    cout<<t;
    cout << "Hello World!" << endl;
    return 0;
}
