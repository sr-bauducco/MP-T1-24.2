
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste_linha1[3][3]= {   { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 0, 2, 1 }
					  };
	int teste_linha2[3][3]= {   { 2, 0, 0 }, 
	                      		{ 2, 0, 1 },
						  		{ 1, 2, 1 }
					  };
    REQUIRE( VerificaVelhaLinha(teste_linha1) == false );
	REQUIRE( VerificaVelhaLinha (teste_linha2) == true);


} 
 
