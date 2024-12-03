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
    // Contadores de X (1) e O (2)
    int countX = 0;
    int countO = 0;
    
    // Verificando linhas para ver se há algum vencedor
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2] && velha[i][0] != 0) {
            return velha[i][0]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
        }
    }

    // Verificando colunas para ver se há algum vencedor
    for (int i = 0; i < 3; ++i) {
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] && velha[0][i] != 0) {
            return velha[0][i]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
        }
    }

    // Verificando diagonal principal (esquerda para direita)
    if (velha[0][0] == velha[1][1] && velha[1][1] == velha[2][2] && velha[0][0] != 0) {
        return velha[0][0]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
    }

    // Verificando diagonal secundária (direita para esquerda)
    if (velha[0][2] == velha[1][1] && velha[1][1] == velha[2][0] && velha[0][2] != 0) {
        return velha[0][2]; // Se alguém venceu, retorna 1 (X) ou 2 (O)
    }

    // Contar o número de X's (1) e O's (2) na matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (velha[i][j] == 1) countX++;
            if (velha[i][j] == 2) countO++;
        }
    }

    // Verificação de jogo impossível pelas regras (número de X's ou O's inválido)
    if (countX > countO + 1 || countO > countX) {
        return -2; // Jogo impossível pelas regras
    }

    // Verificar se há espaços vazios (indicados por 0)
    bool temEspacoVazio = false;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (velha[i][j] == 0) {
                temEspacoVazio = true; // Encontrei um espaço vazio
                break;
            }
        }
    }

    // Se há espaços vazios, o jogo está indefinido
    if (temEspacoVazio) {
        return -1; // Jogo indefinido
    }

    // Se não houver espaços vazios e ninguém venceu, é empate
    return 0; // Empate
}



