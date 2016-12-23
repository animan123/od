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
	bitboard bishop[4][64];
	for (char first='A'; first<='H'; ++first) {
		for (char second='1'; second<='8'; ++second) {
			string notation (2, 'x');
			notation[0] = first;
			notation[1] = second;
			int index = INDEX(notation);
			char fakefirst, fakesecond;

			bishop[NORTHWEST][index] = BITBOARD(0);
			fakefirst = first;
			fakesecond = second;
			while (fakefirst >= 'A' && fakesecond <= '8') {
				notation[0] = fakefirst;
				notation[1] = fakesecond;
				SET_NOTATION (bishop[NORTHWEST][index], notation);
				fakefirst--;
				fakesecond++;
			}

			bishop[NORTHEAST][index] = BITBOARD(0);
			fakefirst = first;
			fakesecond = second;
			while (fakefirst <= 'H' && fakesecond <= '8') {
				notation[0] = fakefirst;
				notation[1] = fakesecond;
				SET_NOTATION (bishop[NORTHEAST][index], notation);
				fakefirst ++;
				fakesecond ++;
			}

			bishop[SOUTHEAST][index] = BITBOARD(0);
			fakefirst = first;
			fakesecond = second;
			while (fakefirst <= 'H' && fakesecond >= '1') {
				notation[0] = fakefirst;
				notation[1] = fakesecond;
				SET_NOTATION (bishop[SOUTHEAST][index], notation);
				fakefirst ++;
				fakesecond --;
			}

			bishop[SOUTHWEST][index] = BITBOARD(0);
			fakefirst = first;
			fakesecond = second;
			while (fakefirst >= 'A' && fakesecond >= '1') {
				notation[0] = fakefirst;
				notation[1] = fakesecond;
				SET_NOTATION (bishop[SOUTHWEST][index], notation);
				fakefirst --;
				fakesecond --;
			}
		}
	}
	cout << "static const bitboard bishop_moves[4][64] = {" << endl;
	for (int direction=0; direction<=3; ++direction) {
		cout << "{";
		for (int index=0; index<64; ++index) {
			cout << "BITBOARD(" << bishop[direction][index] << "), ";
		}
		cout << "}," << endl;
	}
	cout << "}";
	return 0;
}
