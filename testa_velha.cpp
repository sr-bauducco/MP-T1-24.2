
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {

	int teste_linha_sucesso[3][3]{   {1, 1, 1},
    								 {2, 2, 0},
    								 {0, 0, 0}
					  };
	int teste_coluna_sucesso[3][3]{    {1, 1, 0},
    								   {1, 2, 0},
    								   {1, 2, 2}
					  };
	int teste_empate[3][3]{    {1, 2, 1},
    						   {2, 1, 1},
    						   {2, 1, 2}
					  };
	int teste_diagonal_sucesso[3][3]{  {1, 2, 1},  
    								   {2, 1, 2},  
    								   {1, 2, 1}
					  };
	int teste_vazio_sucesso[3][3]{     {1, 2, 0}, 
    								   {2, 1, 0}, 
    								   {0, 1, 2}  
					  };
	int teste_impossivel_sucesso[3][3]{ {1, 1, 1},
    									{1, 1, 1},
    									{1, 1, 1}
					  };

	REQUIRE( VerificaVelha (teste_linha_sucesso)== 1);
	REQUIRE( VerificaVelha (teste_coluna_sucesso) == 1);
	REQUIRE(VerificaVelha (teste_diagonal_sucesso) == 1);
	REQUIRE(VerificaVelha (teste_vazio_sucesso) == -1);
	REQUIRE(VerificaVelha (teste_impossivel_sucesso) == -2);
	REQUIRE( VerificaVelha (teste_empate) == 0);

} 
 
