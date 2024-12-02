
/**
 * \file testa_velha.cpp
 */

#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
  


TEST_CASE( "Testa velha", "[single-file]" ) {
	int teste_linha1[3][3]= {   { 2, 0, 1 }, 
	                      		{ 2, 0, 1 },
						  		{ 0, 1, 2 }
					  };
    REQUIRE( VerificaVelha(teste_linha1) == 1 );
} 
 
