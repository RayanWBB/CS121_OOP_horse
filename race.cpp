// race.cpp

#include <iostream>
#include <random>
#include "race.h"
#include "horse.h"

Race::Race() {
	const int TRACK_LENGTH = 15;
	const static int NUM_HORSES = 5;

	Horse horses[NUM_HORSES];
	int horseSentry = 0; // sentry variable	
	for(horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++) {
		horses[horseSentry].init(horseSentry, TRACK_LENGTH);
	} // end for
} // end constructor

void Race::start() {
	bool keepGoing = true;
	int horseSentry = 0; // sentry variable	
	Race::TRACK_LENGTH = 15;
	Race::NUM_HORSES = 5;
	while (keepGoing == true) {
		for (horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++) {
		//	std::cout << horseSentry;
		//	std::cout << std::endl;
			horses[horseSentry].advance();
			horses[horseSentry].printLane(TRACK_LENGTH, horseSentry);
			if (horses[horseSentry].isWinner() == true) {
				keepGoing = false;
			} // end if
		} // end for
		keepGoing = false;
	} // end while
} // end race
