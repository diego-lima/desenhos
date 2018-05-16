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
        char _pincel;
        vector<vector<char>> matriz;
        bool _status;

    public:

        /**
         * @brief Construtor da classe que não recebe dimensões e não aloca matriz
         */
        Tela();

        /**
         * @brief Construtor da classe
         * @param nl quantidade de linhas
         * @param nc quantidade de colunas
         */
        Tela(int nl, int nc, char p=' ');

        /**
         * @brief Reajusta as dimensões da tela para o formato desejado
         * @param nl novo numero de linhas
         * @param nc novo numero de colunas
         */
        void ajustar_dimensoes(int nl, int nc, char p=' ');

        /**
         * @brief Seta na posição desejada uma pincelada
         * @param x coordenada x
         * @param y coordenada y
         */
        void pincelar(int x, int y);

        /**
         * @brief Modifica o pincel
         * @param p novo caractere para pintar
         */
        void pincel(char p);
        /**
         * @brief Limpa a tela
         */
        void limpar();

        /**
         * @brief Verifica se a tela foi inicializada adequadamente, isto é, se as
         * dimensões foram setadas corretamente
         * @return true ou false
         */
        bool status(void);
        void escrever_arquivo();

        friend ostream& operator<<(ostream &os, Tela &t);
};

#endif // TELA_H
