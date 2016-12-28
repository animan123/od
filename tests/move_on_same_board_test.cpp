#include "../src/moves.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "../src/board.h"
#include "tests.h"

int main () {
	board b;
	MOVE_ON_SAME_BOARD(b, INDEX("G1"), INDEX("F3"));
	PRINTBOARD (b.all[ALL], "G2 to F3 on start board all");
	PRINTBOARD (b.knight[ALL], "G2 to F3 on start board all");
	UNMOVE_ON_SAME_BOARD(b, INDEX("G1"), INDEX("F3"));
	PRINTBOARD (b.all[ALL], "G2 to F3 on start board all");
	PRINTBOARD (b.knight[ALL], "G2 to F3 on start board all");
	return 0;
}
