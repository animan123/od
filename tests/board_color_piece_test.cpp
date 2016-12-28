#include "../src/board.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "tests.h"

int main () {
	board b;
	TEST(b.square_color(INDEX("A1")) == WHITE, "color of A1 test");
	TEST(b.square_color(INDEX("A8")) == BLACK, "color of A8 test");
	TEST(b.square_color(INDEX("E4")) == NOCOLOR, "color of E4 test");
	TEST(b.square_color(INDEX("D5")) == NOCOLOR, "color of D5 test");
	TEST(b.square_color(INDEX("H2")) == WHITE, "color of H2 test");

	TEST(b.square_piece(INDEX("A1")) == ROOK, "piece test of A1");
	TEST(b.square_piece(INDEX("B8")) == KNIGHT, "piece test of B8");
	TEST(b.square_piece(INDEX("D1")) == QUEEN, "piece test of D1");
	TEST(b.square_piece(INDEX("E8")) == KING, "piece test of E8");
	TEST(b.square_piece(INDEX("C4")) == NOPIECE, "piece test of C4");

	return 0;
}

