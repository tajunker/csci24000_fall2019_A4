#include <string> 
#include <iostream> 
#include <iomanip> 
#include <stdlib.h> 
#include <time.h>
#include <stdio.h>  

#include "Race.h"
#include "Horse.h"

#define TRACK_LENGTH 45
#define HORSES_LENGTH 5

using namespace std; 

int main(){ 

	
	//declare int seed
    int seed;
    
    //print the statement in quotations.
    printf("\n");	
    
    //print the statement in quotations.
    printf("Please enter a random seed: ");
    
    
    //scan user input to seed the srand function.
    scanf("%d", &seed);
    
    //print the statement in quotations.
    printf("\n");	

    //seed srand function. 
    srand(seed);

	
	Race r(HORSES_LENGTH, TRACK_LENGTH); 

	while(!r.is_end()) { 
		
		r.printLane(); 
		r.start(); 
	} 

	printf("\n");
	
}
