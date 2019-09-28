#ifndef HORSE_H
#define HORSE_H

class Horse
{
	public:
		Horse();
		Horse(int iPos);
		~Horse();

		void advance();
		int getPosition();
		void win();

	private: 
		int position; 
		bool bWon;
		int movePercentage; 	

	
};

#endif 
