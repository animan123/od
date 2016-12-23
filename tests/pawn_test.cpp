#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.pawn[WHITE], "Initial white pawns");
	PRINTBOARD (b.pawn[BLACK], "Initial black pawns");
	PRINTBOARD (b.pawn[ALL], "Initial all pawns");
	return 0;
}
