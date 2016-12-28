#include "../src/moves.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "../src/board.h"
#include "tests.h"

int main () {
	board b;
	TEST (MOVE_IS_SANE(b, INDEX("E2"), INDEX("E4")) == 1, "Move sanity test for E2 to E4 on start board");
	TEST (MOVE_IS_SANE(b, INDEX("A1"), INDEX("A2")) == 0, "Move sanity test for A1 to A2 on start board");
	TEST (MOVE_IS_SANE(b, INDEX("B2"), INDEX("B7")) == 1, "Move sanity test for B2 to B7 on start board");
	TEST (MOVE_IS_SANE(b, INDEX("E3"), INDEX("E4")) == 0, "Move sanity test for E3 to E4 on start board");
	TEST (MOVE_IS_SANE(b, INDEX("E5"), INDEX("E7")) == 0, "Move sanity test for E5 to E7 on start board");
	return 0;
}
