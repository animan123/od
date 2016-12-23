#include "../src/utils.h"
#include "../src/constants.h"
#include "tests.h"
#include <string>
using namespace std;

int main () {
	bitboard x = BITBOARD(0);
	for(int i=0; i<64; ++i) {
		SET(x, i);
	}

	int counter = 0;
	while (x) {
		int i = POPCNT(x);
		test(i==counter, "Pop count test for " + to_string(counter));
		counter += 1;
		RESET(x, i);
	}
}
