// race.cpp

#include <iostream>
#include <random>
#include <race.h>
#include <horse.h>

Race::Race() {
	const int TRACK_LENGTH;
	const static int NUM_HORSES;

	Horse horses[NUM_HORSES];
	int horseSentry = 0; // sentry variable	
	for(horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++) {
		horses[horseSentry].init(horseSentry, TRACK_LENGTH);
	} // end for
} // end constructor

Race::start() {
	bool keepGoing = true;
	int horseSentry = 0; // sentry variable	
	while (keepGoing) {
		for (horseSentry = 0; horseSentry < NUM_HORSES; horseSentry++) {
			horses[horseSentry].advance();
			horses[horseSentry].printLane();
			if (horses[horseSentry].isWinner == true) {
				keepGoing = false;
			} // end if
		} // end for
	} // end while
} // end race
