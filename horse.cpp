// horse.cpp

#include <iostream>
#include <random>
#include <horse.h>

Horse::Horse() { // initializes data members position, index, and trackLength
	position = 0;
	index = 0;
	trackLength = 15;
} // end constructor

void Horse::init(int index, int trackLength) { // initializes a horse with an index, a starting position, and where the finish line is
	Horse::index = index;
	Horse::trackLength = trackLength;
	Horse::position = 0;
} // end initialization

void Horse::advance() {
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	int forward = dist(rd);
	Horse::position = Horse::position + forward;
} // end advance

void Horse::printLane() {
	int pos = 0; // sentry variable
	for(pos = 0; pos < Horse::trackLength; pos++) {
		if(Horse::position == pos) {
			std::cout << Horse::index;
		} else {
			std::cout << ".";
		} // end if
	} // end for
	std::cout << "\n";
} // end printLane

bool Horse::isWinner() {
	bool winning = false;
	if(Horse::position >= Horse::trackLength) {
		winning = true;
		std::cout << Horse::index << " IS A WINNER ! ! ! ! !" << std::endl; 
	}
	return winning;
} // end isWinner
