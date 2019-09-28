HorseRace: Horse.o Race.o main.o
	g++ Horse.o Race.o main.o -o HorseRace

main.o: main.cpp
	g++ main.cpp -c

Race.o: Race.cpp
	g++ Race.cpp -c

Horse.o: Horse.cpp
	g++ Horse.cpp -c

clean:
	rm *.o

run: HorseRace
	./HorseRace