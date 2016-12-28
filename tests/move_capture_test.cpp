#include "../src/moves.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "../src/board.h"
#include "tests.h"

int main () {
	board b;
	TEST (MOVE_IS_CAPTURE(b, INDEX("E2"), INDEX("E4")) == 0, "Capture test for E2 to E4");
	TEST (MOVE_IS_CAPTURE(b, INDEX("C2"), INDEX("C7")) == 1, "Capture test for C2 to C7");
	TEST (MOVE_IS_CAPTURE(b, INDEX("D7"), INDEX("D5")) == 0, "Capture test for D7 to D5");
	TEST (MOVE_IS_CAPTURE(b, INDEX("F7"), INDEX("E2")) == 1, "Capture test for F7 to E2");
	return 0;
}
