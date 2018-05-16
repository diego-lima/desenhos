#include "headers/tela.h"
#include <headers/figurageometrica.h>

#ifndef LEITOR_H
#define LEITOR_H


class Leitor{
    private:
        /**
         * @brief string que guarda caminho do arquivo sendo lido
         */
        char* _arquivo;
        vector<FiguraGeometrica> figuras;
    public:
        /**
         * @brief Construtor da classe, que recebe arquivo para leitura
         * @param caminho do arquivo de texto para leitura
         */
        Leitor(char* caminho = "");

        /**
         * @brief "Despeja" o conteúdo do arquivo lido sobre a tela fornecida
         * @param tela a ser preenchida com as figuras geometricas encontradas no arquivo
         */
        void despejar(Tela &tela);
};

#endif // LEITOR_H
