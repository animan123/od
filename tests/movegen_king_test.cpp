#include "../src/moves.h"
#include "../src/constants.h"
#include "../src/utils.h"
#include "../src/board.h"
#include "../src/movegen.h"
#include "tests.h"
#include <queue>
#include <iostream>
using namespace std;

int main () {
	board b;
	MOVE_ON_SAME_BOARD (b, INDEX("E2"), INDEX("E4"));
	MOVE_ON_SAME_BOARD (b, INDEX("E7"), INDEX("E5"));
	MOVE_ON_SAME_BOARD (b, INDEX("G1"), INDEX("F3"));
	MOVE_ON_SAME_BOARD (b, INDEX("D7"), INDEX("D5"));
	MOVE_ON_SAME_BOARD (b, INDEX("F1"), INDEX("C4"));
	PRINTBOARD (b.all[ALL], "Originally .. ");
	MoveList move_list;
	gen_king_moves (move_list, b, WHITE);
	while (!move_list.empty()) {
		Move m = move_list.top ();
		move_list.pop ();
		if MOVE_IS_CAPTURE (b, m.from, m.to) {
			cout << "Capture move: " << endl;
			board c = MOVE_ON_DIFFERENT_BOARD (b, m.from, m.to);
			PRINTBOARD (c.all[ALL], m.move_name());
		} else {
			cout << "Non capture move: " << endl;
			MOVE_ON_SAME_BOARD (b, m.from, m.to);
			PRINTBOARD (b.all[ALL], m.move_name());
			UNMOVE_ON_SAME_BOARD (b, m.from, m.to);
		}
		int input;
		cin>>input;
	}
	return 0;
}
