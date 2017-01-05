/*
	Generate bitboard for bishop moves in a given direction
	from a particular square.
*/

#include "../src/constants.h"
#include "../src/utils.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	bitboard occupancy[64];
	for(int i=0; i<64; ++i) {
		occupancy[i] = BITBOARD(0);
		SET (occupancy[i], i);
	}
	cout << "static const bitboard occupancy[64] = { " << endl;
	for(int i=0; i<64; ++i) {
		cout << "BITBOARD(" << occupancy[i] << "), ";
	}
	cout << "};";
	return 0;
}
