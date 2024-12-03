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


int VerificaVelha(int velha[3][3]) {
    // Variáveis para contar o número de X's e O's
    int countX = 0, countO = 0;

    // Verificando se o tabuleiro está completo (sem espaços vazios)
    bool completo = true;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (velha[i][j] == 0) {
                completo = false; // Se houver algum 0, o tabuleiro não está completo
            }
            if (velha[i][j] == 1) countX++;
            if (velha[i][j] == 2) countO++;
        }
    }

    // Verificação de número inválido de X's e O's
    if (countX > countO + 1 || countO > countX) {
        return -2; // Jogo impossível pelas regras
    }

    // Verificando as linhas para um vencedor
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2] && velha[i][0] != 0) {
            return velha[i][0]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
        }
    }

    // Verificando as colunas para um vencedor
    for (int i = 0; i < 3; ++i) {
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] && velha[0][i] != 0) {
            return velha[0][i]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
        }
    }

    // Verificando a diagonal principal para um vencedor
    if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] && velha[0][0] != 0) {
        return velha[0][0]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
    }

    // Verificando a diagonal secundária para um vencedor
    if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] && velha[0][2] != 0) {
        return velha[0][2]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
    }

    // Se o tabuleiro está completo e ninguém venceu, é empate
    if (completo) {
        return 0; // Empate
    }

    // Se ainda houver espaços vazios, o jogo está indefinido
    return -1; // Jogo indefinido
}



