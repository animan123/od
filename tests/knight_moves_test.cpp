#include "../src/constants.h"
#include "../src/movegen.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	PRINTBOARD (knight_moves[INDEX("A1")], "Knight moves for A1");
	PRINTBOARD (knight_moves[INDEX("H8")], "Knight moves for H8");
	PRINTBOARD (knight_moves[INDEX("A8")], "Knight moves for A8");
	PRINTBOARD (knight_moves[INDEX("H1")], "Knight moves for H1");
	PRINTBOARD (knight_moves[INDEX("E4")], "Knight moves for E4");
	PRINTBOARD (knight_moves[INDEX("E1")], "Knight moves for E1");
	PRINTBOARD (knight_moves[INDEX("E8")], "Knight moves for E8");
return 0;
}
