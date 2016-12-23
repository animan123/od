/*
	Generate bitboard for rook moves in a given direction
	from a particular square.
*/

#include "../src/constants.h"
#include "../src/utils.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	bitboard rook[4][64];
	for(char first='A'; first<='H'; ++first) {
		for(char second='1'; second<='8'; ++second) {
			string notation (2, 'x');
			notation[0] = first;
			notation[1] = second;
			int index = INDEX (notation);
			rook[NORTH][index] = BITBOARD(0);
			for (char var=second; var<='8'; ++var) {
				notation[1] = var;
				SET_NOTATION (rook[NORTH][index], notation);
			}
			rook[SOUTH][index] = BITBOARD(0);
			for (char var=second; var>='1'; --var) {
				notation[1] = var;
				SET_NOTATION (rook[SOUTH][index], notation);
			}
			notation[1] = second;
			rook[EAST][index] = BITBOARD(0);
			for (char var=first; var<='H'; ++var) {
				notation[0] = var;
				SET_NOTATION (rook[EAST][index], notation);
			}
			rook[WEST][index] = BITBOARD(0);
			for (char var=first; var>='A'; --var) {
				notation[0] = var;
				SET_NOTATION (rook[WEST][index], notation);
			}
		}
	}

	cout << "rook[4][64] = {";
	for (int direction=NORTH; direction<=WEST; ++direction) {
		cout << "{";
		for (int index=0; index<64; ++index) {
			cout << "BITBOARD(" << rook[direction][index] << "), ";
		}
		cout << "}," << endl;
	}
	cout << "}";

	return 0;
}
