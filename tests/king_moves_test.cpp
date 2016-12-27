#include "../src/constants.h"
#include "../src/moves.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	PRINTBOARD (king_moves[INDEX("A1")], "King moves for A1");
	PRINTBOARD (king_moves[INDEX("H8")], "King moves for H8");
	PRINTBOARD (king_moves[INDEX("A8")], "King moves for A8");
	PRINTBOARD (king_moves[INDEX("H1")], "King moves for H1");
	PRINTBOARD (king_moves[INDEX("E4")], "King moves for E4");
	PRINTBOARD (king_moves[INDEX("E1")], "King moves for E1");
	PRINTBOARD (king_moves[INDEX("E8")], "King moves for E8");
	return 0;
}
