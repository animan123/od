#include "../src/moves.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "../src/board.h"
#include "tests.h"

int main () {
	board b;
	MOVE_ON_SAME_BOARD(b, INDEX("G1"), INDEX("F3"));
	MOVE_ON_SAME_BOARD(b, INDEX("F3"), INDEX("G5"));
	board c = MOVE_ON_DIFFERENT_BOARD(b, INDEX("G5"), INDEX("F7"));
	PRINTBOARD(c.all[ALL], "After capture new board[all]");
	PRINTBOARD(c.knight[ALL], "After capture new board[knight]");
	PRINTBOARD(c.pawn[ALL], "After capture new board[pawn]");
	return 0;
}
