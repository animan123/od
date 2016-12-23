#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.queen[WHITE], "White queen");
	PRINTBOARD (b.queen[BLACK], "Black queen");
	PRINTBOARD (b.queen[ALL], "Both queens");
	return 0;
}
