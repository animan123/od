#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.queen[WHITE], "White king");
	PRINTBOARD (b.queen[BLACK], "Black king");
	PRINTBOARD (b.queen[ALL], "Both kings");
	PRINTBOARD (b.all, "All pieces");
	return 0;
}
