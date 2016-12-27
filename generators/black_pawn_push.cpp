/*
	Generate bitboard for black pawn push moves
	for a particular square
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
	bitboard black_pawn_push[64];
	for(char first='A'; first<='H'; ++first) {
		for(char second='1'; second<='8'; ++second) {
			string notation(2, 'x');
			notation[0] = first;
			notation[1] = second;
			int index = INDEX (notation);
			black_pawn_push[index] = BITBOARD (0);
			if (second == '8') {
				continue;
			}
			if (second == '7') {
				notation[1] = '5';
				SET_NOTATION (black_pawn_push[index], notation);
			}
			if (within_bounds (first, second-1)) {
				notation[1] = second - 1;
				SET_NOTATION (black_pawn_push[index], notation);
			}
		}
	}
	cout << "static const bitboard black_pawn_push_moves[64] = {" << endl;
	for (int i=0; i<64; ++i) {
		cout << "BITBOARD(" << black_pawn_push[i] << "), ";
	}
	cout << "};" << endl;
	return 0;
}
