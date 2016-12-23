#include "../src/utils.h"
#include "../src/constants.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	int counter = 0;
	for (char second = '1'; second <= '8'; ++second) {
		for (char first = 'A'; first <= 'H'; ++first) {
			string nota (2, 'a');
			nota[0] = first;
			nota[1] = second;
			TEST (INDEX(nota) == counter, "Index test for " + nota);
			counter += 1;
		}
	}

	counter = 0;
	for (char second = '1'; second <= '8'; ++second) {
		for (char first = 'A'; first <= 'H'; ++first) {
			string nota (2, 'a');
			nota[0] = first;
			nota[1] = second;
			string x = NOTATION (counter);
			TEST (x == nota, "Notation test for " + nota);
			counter += 1;
		}
	}

	bitboard x = BITBOARD(0);
	for (int i=0; i<64; ++i) {
		bitboard y = x;
		SET(y, i);
		TEST (y == (BITBOARD(1)<<i), "Set test for " + to_string(i));
		RESET (y, i);
		TEST (y == x, "Reset test for " + to_string(i));
	}

	x = BITBOARD(10);
	for (int i=0; i<64; ++i) {
		bitboard y = x;
		SET(y, i);
		RESET (y, i);
		TEST (y == x, "Set Reset test for " + to_string(i) + "(should fail for 1 and 3)");
	}

	return 0;
}
