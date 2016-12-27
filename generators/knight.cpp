/*
	Generate bitboard for knight moves in a given direction
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
	bitboard knight[64];
	for(char first='A'; first<='H'; ++first) {
		for(char second='1'; second<='8'; ++second) {
			string notation (2, 'x');
			notation[0] = first;
			notation[1] = second;
			int index = INDEX (notation);
			knight[index] = BITBOARD (0);
			for(int x=-2; x<=2; ++x) {
				for(int y=-2; y<=2; ++y) {
					if (within_bounds(first+x, second+y) && (abs(x) + abs(y) == 3)) {
						notation[0] = first+x;
						notation[1] = second+y;
						SET_NOTATION (knight[index], notation);
					}
				}
			}
		}
	}
	cout << "static const bitboard knight_moves[64] = {" << endl;
	for(int i=0; i<64; ++i) {
		cout << "BITBOARD(" << knight[i] << "), ";
	}
	cout << "};" << endl;
	return 0;
}
