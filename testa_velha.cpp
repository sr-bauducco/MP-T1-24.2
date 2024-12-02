
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste_linha_falha[3][3]= {   { 2, 2, 0 }, 
	                      			{ 1, 0, 1 },
						  			{ 1, 1, 2 }
					  };
	int teste_linha_sucesso[3][3]{   { 2, 2, 2 }, 
	                      			{ 1, 0, 1 },
						  			{ 0, 1, 1 }
					  };
  	REQUIRE( VerificaVelha(teste_linha_falha) == 0 );
	REQUIRE( VerificaVelha (teste_linha_sucesso)== 1);
} 
 
