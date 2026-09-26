// horse.h
#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int index;
		int trackLength;
	public:
		Horse();
		init(int index, int trackLength);
		advance();
		printLane(int trackLength, int index);
		isWinner() : bool;
};

#endif
