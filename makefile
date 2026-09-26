horseGame: horse.o race.o main.o
	g++ -g horse.o race.o main.o -o horseGame

main.o: horse.h race.h main.cpp
	g++ -c -g main.cpp

horse.o: horse.h horse.cpp
	g++ -c -g horse.cpp

car.o: horse.h race.h race.cpp
	g++ -c -g race.cpp

clean:
	rm *.o
	rm horseGame

run: horseGame
	./horseGame

debug: horseGame
	gdb horseGame

