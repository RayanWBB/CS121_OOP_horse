#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

class Race {
	private:
		int NUM_HORSES;
		int TRACK_LENGTH;
		Horse horses[];
	public:
		Race();
		start();
};

#endif
