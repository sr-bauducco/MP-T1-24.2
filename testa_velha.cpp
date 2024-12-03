
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
	int teste_linha_sucesso[3][3]{   { 1, 1, 1 }, 
	                      			 { 2, 0, 2 },
						  			 { 0, 2, 2 }
					  };
	int teste_coluna_falha[3][3]= {   { 2, 0, 1 }, 
	                      			  { 1, 2, 2 },
						  			  { 1, 2, 1 }
					  };
	int teste_coluna_sucesso[3][3]{   { 0, 2, 1 }, 
	                      			  { 1, 2, 2 },
						  			  { 1, 2, 1 }
					  };
  	REQUIRE( VerificaVelha(teste_linha_falha) == 0 );
	REQUIRE( VerificaVelha (teste_linha_sucesso)== 1);
	REQUIRE( VerificaVelha(teste_coluna_falha) == 0 );
	REQUIRE( VerificaVelha (teste_coluna_sucesso) == 1);
	
} 
 
