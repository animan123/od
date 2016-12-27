#include "../src/constants.h"
#include "../src/moves.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	PRINTBOARD (black_pawn_capture_moves[INDEX("A1")], "black_pawn_capture moves for A1");
	PRINTBOARD (black_pawn_capture_moves[INDEX("A7")], "black_pawn_capture moves for A7");
	PRINTBOARD (black_pawn_capture_moves[INDEX("D7")], "black_pawn_capture moves for D7");
	PRINTBOARD (black_pawn_capture_moves[INDEX("H2")], "black_pawn_capture moves for H2");
	PRINTBOARD (black_pawn_capture_moves[INDEX("B8")], "black_pawn_capture moves for B8");
	return 0;
}
