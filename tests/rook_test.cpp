#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.rook[WHITE], "White rooks");
	PRINTBOARD (b.rook[BLACK], "Black rooks");
	PRINTBOARD (b.rook[ALL], "Both rooks");
	return 0;
}
