#include "Race.h"
#include "Horse.h"
#include <iostream>
#include <stdio.h>

#define TRACK_LENGTH 25
#define HORSES_LENGTH 5

using namespace std;

	
Race::Race(int iHorses, int iLen) { 
	
	iCount = iHorses; 
	h = new Horse[iCount]; 
	length = iLen; 
	bEnd = false; 
} 

Race::~Race() { 
	delete[] h; 
	h = NULL; 
}	

void Race::printLane() { 



	//loop through the array of horses 
    for(int i = 0; i < iCount; i++){
        
        
        //print a '.' equal to the track length for for the amount of horses in the array horses 
        for(int track = 0; track < h[i].getPosition(); track++) {
        

    		//print the statement in quotations.
            printf(".");
        
        
        } //end of inner for loop
        
        
        //print the horse number
        printf("%d", i);
        
        
        //print the '.' equal to the track length for the '.' after the horse number is printed
        for(int track = h[i].getPosition()+2; track <= TRACK_LENGTH; track++) {
            

        	//print the statement in quotations.
            printf(".");
            
            
        } //end of inner for loop
        

        //print the statement in quotations.
        printf("\n");
        
        
    } //end of outer for loop
    
    
    //print the statement in quotations.
    printf("\n");
    

    //print the statement in quotations.
    printf("\n");
    
}

bool Race::is_end() {

	return bEnd; 
} 

void Race::start() { 

	if (bEnd) return;  
	
	
	for (int i = 0; i < iCount; i++) { 
		
		h[i].advance(); 
		
		if (h[i].getPosition() == length) { 
			
			bEnd = true;
			h[i].win(); 
			cout<<"Horse "<<i<<" wins!"<<endl; 
			
		} 


	}


} 

