#include "../src/board.h"
#include "../src/constants.h"
#include "tests.h"

int main () {
	board b;
	print_board (b.pawn[WHITE], "Initial white pawns");
	print_board (b.pawn[BLACK], "Initial black pawns");
	print_board (b.pawn[ALL], "Initial all pawns");
	print_board (b.all, "All pieces");
	return 0;
}
