/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  O programa acompanha, linha por linha, o preenchimento da matriz, a fim de saber se os numeros preenchidos, são iguais. Caso forem,
 * retorna TRUE. Caso não, retorna FALSE.
 */ 

void contarJogadores(int tabuleiro[3][3], int &countX, int &countO) {
    countX = 0;
    countO = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (tabuleiro[i][j] == 1) {
                countX++;
            } else if (tabuleiro[i][j] == 2) {
                countO++;
            }
        }
    }
}

int VerificaVelha(int velha[3][3]) {
    // Verificando as linhas e retornando ganhador
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2] && velha[i][0] != 0) {
            return velha[i][0];  // Retorna o valor que venceu (1 ou 2)
        }
    }

    // Verificando as colunas e retornando ganhador
    for (int i = 0; i < 3; ++i) {
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] && velha[0][i] != 0) {
            return velha[0][i];  // Retorna o valor que venceu (1 ou 2)
        }
    }

    // Verificando diagonal principal
    if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] && velha[0][0] != 0) {
        return velha[0][0];  // Retorna o valor que venceu (1 ou 2)
    }

    // Verificando diagonal secundária
    if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] && velha[0][2] != 0) {
        return velha[0][2];  // Retorna o valor que venceu (1 ou 2)
    }

    // Verifica se há espaço vazio
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (velha[i][j] == 0) {
                return -1;  // Jogo indefinido (ainda há espaços vazios)
            }
        }
    }

    // Se não houver nenhuma das opções acima, retorna 0 por empate
    return 0;
}



