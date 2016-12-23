#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.bishop[WHITE], "White bishops");
	PRINTBOARD (b.bishop[BLACK], "Black bishops");
	PRINTBOARD (b.bishop[ALL], "Both bishops");
	return 0;
}
