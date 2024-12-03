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
    // confere linha por linha para saber se houve vitoria
    for (int i = 0; i < 3; i++) {
        if (velha[i][0] != 0 && velha[i][0] == velha[i][1] && velha[i][1] == velha[i][2]) {
            return 1; 
        }else{ 
            return 0;
        } };
        //confere coluna por coluna
    for (int i = 0; i < 3; ++i) {
        if (velha[0][i] == velha[1][i] && velha[1][i] == velha[2][i] && velha[0][i] != 0) {
            return 1;
        }else{
            return 0;
        }
    }
    
};



