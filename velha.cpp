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

int VerificaVelha( int velha[3][3] )
{
    // Verificando as linhas
    for (int i = 0; i < 3; ++i) {
        if (velha[i][0] != 0 && velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
            return 1; // Vitória na linha
        }
    }
    
    // Verificando as colunas
    for (int i = 0; i < 3; ++i) {
        if (velha[0][0] == velha[1][0] && velha[1][0] == velha[2][0] && velha[0][0] != 0)  
        {
            return 1; // Vitória na coluna
        }else if( velha[0][1] == velha[1][1] && velha[1][1] == velha[2][1] && velha[0][1] != 0 )
        {
            return 1;
        }else if(velha[0][2] == velha[1][2] && velha[1][2] == velha[2][2] && velha[0][2] != 0){
            return 1;
        }
        return 0;
    }

    return 0; // Nenhuma vitória
};




