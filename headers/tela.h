#include <vector>
#include <fstream>

using namespace std;

#ifndef TELA_H
#define TELA_H

/**
 * @brief A classe da tela
 */

class Tela {
    private:
        int linhas;
        int colunas;
        char pincel;
        vector<vector<char>> matriz;

    public:

        /**
         * @brief Construtor da classe
         * @param nl quantidade de linhas
         * @param nc quantidade de colunas
         */
        Tela(int nl=0, int nc=0, char p=' ');

        friend ostream& operator<<(ostream &os, Tela &t);
};

#endif // TELA_H
