#include "Horse.h"
#include <iostream>
#include <cstdlib>

Horse::Horse() {

	position = 0;
	bWon = false;
} 

Horse::~Horse(){
	
}
	
Horse::Horse(int iPos) {

	position = iPos;
	bWon = false;
} 

void Horse::advance() { 
	position += rand() % 2 == 1; 
} 

// grab the position of a horse 
int Horse::getPosition() {
	return position; 
} 

void Horse::win() { 

	bWon = true; 
} 

