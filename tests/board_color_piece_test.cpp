#include "../src/board.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "tests.h"
#include <iostream>
using namespace std;

int main () {
	board b;
	TEST(COLOR_OF_PIECE_ON(b, INDEX("A1")) == WHITE, "color of A1 test");
	TEST(COLOR_OF_PIECE_ON(b, INDEX("A8")) == BLACK, "color of A8 test");
	TEST(COLOR_OF_PIECE_ON(b, INDEX("E4")) == NOCOLOR, "color of E4 test");
	TEST(COLOR_OF_PIECE_ON(b, INDEX("D5")) == NOCOLOR, "color of D5 test");
	TEST(COLOR_OF_PIECE_ON(b, INDEX("H2")) == WHITE, "color of H2 test");

	TEST(PIECE_ON(b, INDEX("A1")) == ROOK, "piece test of A1");
	TEST(PIECE_ON(b, INDEX("B8")) == KNIGHT, "piece test of B8");
	TEST(PIECE_ON(b, INDEX("D1")) == QUEEN, "piece test of D1");
	TEST(PIECE_ON(b, INDEX("E8")) == KING, "piece test of E8");
	TEST(PIECE_ON(b, INDEX("C4")) == NOPIECE, "piece test of C4");
	return 0;
}

