#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.king[WHITE], "White king");
	PRINTBOARD (b.king[BLACK], "Black king");
	PRINTBOARD (b.king[ALL], "Both kings");
	PRINTBOARD (b.all, "All pieces");
	return 0;
}
