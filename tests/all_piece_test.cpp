#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.all[WHITE], "White all");
	PRINTBOARD (b.all[BLACK], "Black all");
	PRINTBOARD (b.all[ALL], "All");
	return 0;
}
