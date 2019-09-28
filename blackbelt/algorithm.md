# Move Percentage:
This program works the same as the program found in the base folder with the addition a move percentage variable which is used in the advance() function to determine if the horses should increment their position on the horse track in addition to the coin flip. 

# Goals: 
This program simulates a horse race. There is a horse track of 15 units long represented by periods and 5 horses. To determine if the horses advance there is a advance function which flips a coin to determine if the horses should advance one unit on the horse track. The horses take turns to determine if they should be advancing or not, the position of the horses on the track is visible throughout the race. The race ends when one of the horses passes the finish line, that is to say after one of the horses advances through the 15 units represented by periods. In this version of the Horse Race the program runs a Object Oriented version of the Program with a Horse.cpp, Horse.h, Race.cpp, Race.h and main.cpp files which are compiled with a makefile.

# Input: 
This program takes in a user inputed integer and scans it into the variable called seed. Seed is used as an integer which seeds the srand function called and use it to seed the random number generator.  

# Output: 
This program prints a horse track of 15 units represented by periods and a horse number. This horse number moves through the track as the horse advances. The advancement of the horses is determined by the result of a coin flip. If this coin flip results in a 1 the horse advances if this coin flip results in a 0 the horse does not advance. 

# Steps: 
For this program 5 files are used - Horse.cpp, Horse.h, Race.cpp, Race.h, and main.cpp. There is also 1 makefile to compile all the outputs necessary to run HorseRace. Within Horse.cpp there is an advance() function, getPosition() function and a win() function. Race.cpp has a printLane() function, is_end() function and a start() function. In main.cpp there is only a main() function.

- main(): In main() the int seed is declared, the user is also prompted to input a random seed integer that seeds srand to generate a random number for the advance() function. The user inputed integer is scanned using scanf. main() also runs a while loop which calls is_end() until a winner is found. Inside the while loop printLane() and start() functions are called.

- advance(): In the advance() function, a 'coin is flipped' to determine if the horses in the horses array advances or not. If rand() returns a 1 the position of the horses increments by one which moves the postion of the horse by 1 on the horse track of 15 units represented by periods. If the rand() equals 0 the position is not incremented and the horse therefore does not advance which is represented by the horse remaining in the same position on the horse track of 15 units represented by the periods.  
        
- printLane(): In the printLane() function the horse track and horses is printed and outputed to the screen using the printf function. 
        
- getPosition(): In the getPosition() the position of the horse is returned. 

- win(): In the win() function the variable bWon is set to true if it is called. 

- is_end(): In the is_end() function the variable bEnd is returned. The variable bEnd is set to false at the beggining of the race. 

- start(): In the start() function the race runs until a winner is found. The start() function loops through an array less than iCount which is set to equal iHorses, iHorses is passed as variable to the Race constructor in main.cpp with the amount of horses in the race along with the legnth of the race track in the variable iLen which is set to the legnth of the track. Inside the for loop the function advance() is called for each of the elements of the array h[] which is an instance of the Horse class. If h[i].getPosition is euqal to the legnth of the track that mean a winner has crossed the finish line which calls the win() function, sets bEnd to true and outputs the winner's horse number to the screen. 
