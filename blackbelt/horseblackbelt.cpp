#include <string> 
#include <iostream> 
#include <iomanip> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

class Horse { 
	
	private: 
	int position; 
	bool bWon; 

	public: 
	
	Horse(const int& iPos = 0) : position(iPos), bWon(false) {} 

	void Advance() { 
		position += rand() % 2; 
	} 

	// grab the position of a horse 
	int getPosition() {
		return position; 
	} 

	void win() { 

		bWon = true; 
	} 

}; 

class Race { 

	private: 
	
		Horse *h; 
		int length; 
		int iCount; 
		bool bEnd; 

	public: 
		Race(int iHorses = 2, int iLen = 10) { 
			
			iCount = iHorses; 
			h = new Horse[iCount]; 
			length = iLen; 
			bEnd = false; 
		} 

	~Race() { 
		delete[] h; 
		h = NULL; 
	}	

	void print() { 
	
		cout << endl; 
		
		for (int i = 0; i < iCount; i++) { 
			for (int j = 0; j < h[i].getPosition(); j++) { 
				cout << '.'; 
			} 
			cout << "(" << i + 1 << ")" << endl; 
		} 
	}

	bool is_end() {

		return bEnd; 
	} 

	void run() { 
		
		if (bEnd) return; 
		
		for (int i = 0; i < iCount; i++) { 
			
			h[i].Advance(); 
			
			if (h[i].getPosition() == length) { 
				
				h[i].win(); 
				bEnd = true; 
			} 
		} 
	} 

}; 

int main(){ 
	
	srand(time(NULL)); 
	
	Race r(5, 10); 

	while(!r.is_end()) { 
		r.run(); 
		r.print(); 
	} 
}