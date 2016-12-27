#include "../src/constants.h"
#include "../src/moves.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	PRINTBOARD (white_pawn_capture_moves[INDEX("A1")], "white_pawn_capture moves for A1");
	PRINTBOARD (white_pawn_capture_moves[INDEX("A2")], "white_pawn_capture moves for A2");
	PRINTBOARD (white_pawn_capture_moves[INDEX("E2")], "white_pawn_capture moves for E2");
	PRINTBOARD (white_pawn_capture_moves[INDEX("H7")], "white_pawn_capture moves for H7");
	PRINTBOARD (white_pawn_capture_moves[INDEX("B8")], "white_pawn_capture moves for B8");
	return 0;
}
