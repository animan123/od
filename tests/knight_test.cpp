#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	PRINTBOARD (b.knight[WHITE], "White knights");
	PRINTBOARD (b.knight[BLACK], "Black knights");
	PRINTBOARD (b.knight[ALL], "Both knights");
	return 0;
}
