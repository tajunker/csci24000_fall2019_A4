#include "Horse.h"
#include <iostream>
#include <cstdlib>


Horse::Horse() {

	position = 0;
	bWon = false;
	movePercentage = 50;
} 

Horse::~Horse(){
	
}
	
Horse::Horse(int iPos) {

	position = iPos;
	bWon = false;
	movePercentage = 50;
} 

void Horse::advance() { 

	position += rand() % 2 == 1; 

	int n = rand() % 100 + 1;

	if (n >= movePercentage) {
		position++;
	}

} 

// grab the position of a horse 
int Horse::getPosition() {
	return position; 
} 

void Horse::win() { 

	bWon = true; 
} 
