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
		int i = POPLSB(x);
		test (i==counter, "Pop LSB test for " + to_string(counter));
		counter += 1;
		RESET(x, i);
	}

	for(int i=0; i<64; ++i) {
		SET(x, i);
	}

	counter=63;
	while (x) {
		int i = POPMSB(x);
		test (i==counter, "Pop MSB test for " + to_string(counter));
		counter -= 1;
		RESET(x, i);
	}
	return 0;
}
