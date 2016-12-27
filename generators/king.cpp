/*
	Generate bitboard for king moves in a given direction
	from a particular square.
*/

#include "../src/constants.h"
#include "../src/utils.h"
#include <string>
#include <iostream>
using namespace std;

int within_bounds (char first, char second) {
	if (first < 'A' || first > 'H' || second < '1' || second > '8') {
		return 0;
	}
	return 1;
}

int main () {
	bitboard king[64];
	for(char first='A'; first<='H'; ++first) {
		for(char second='1'; second<='8'; ++second) {
			string notation (2, 'x');
			notation[0] = first;
			notation[1] = second;
			int index = INDEX (notation);
			king[index] = BITBOARD (0);
			for(int x=-1; x<=1; ++x) {
				for(int y=-1; y<=1; ++y) {
					if (within_bounds(first+x, second+y) && (x || y)) {
						notation[0] = first+x;
						notation[1] = second+y;
						SET_NOTATION (king[index], notation);
					}
				}
			}
		}
	}
	cout << "static const bitboard king_moves[64] = {" << endl;
	for(int i=0; i<64; ++i) {
		cout << "BITBOARD(" << king[i] << "), ";
	}
	cout << "};" << endl;
	return 0;
}
