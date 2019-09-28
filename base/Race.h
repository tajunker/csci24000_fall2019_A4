#ifndef RACE_H
#define RACE_H

#include "Horse.h"

class Race
{
	public:
		Race();
		Race(int iHorses, int iLen);
		~Race();


		void printLane();
		bool is_end();
		void start();

	private: 
	
		Horse *h; 
		int length; 
		int iCount; 
		bool bEnd; 

		
};

#endif 