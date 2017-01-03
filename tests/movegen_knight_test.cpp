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
	MOVE_ON_SAME_BOARD (b, INDEX("G1"), INDEX("F3"));
	MOVE_ON_SAME_BOARD (b, INDEX("E7"), INDEX("E6"));
	MOVE_ON_SAME_BOARD (b, INDEX("F3"), INDEX("D4"));
	MoveList move_list;
	gen_knight_moves (move_list, b, WHITE);
	while (!move_list.empty()) {
		Move m = move_list.top ();
		move_list.pop ();
		if MOVE_IS_CAPTURE (b, m.from, m.to) {
			board c = MOVE_ON_DIFFERENT_BOARD (b, m.from, m.to);
			PRINTBOARD (c.all[ALL], m.move_name());
		} else {
			MOVE_ON_SAME_BOARD (b, m.from, m.to);
			PRINTBOARD (b.all[ALL], m.move_name());
			UNMOVE_ON_SAME_BOARD (b, m.from, m.to);
		}
		int input;
		cin>>input;
	}
	
	MOVE_ON_SAME_BOARD (b, INDEX("E2"), INDEX("E4"));
	MOVE_ON_SAME_BOARD (b, INDEX("B8"), INDEX("C6"));
	MOVE_ON_SAME_BOARD (b, INDEX("D2"), INDEX("D3"));
	MOVE_ON_SAME_BOARD (b, INDEX("G8"), INDEX("H6"));
	move_list = gen_moves (b, BLACK);
	while (!move_list.empty()) {
		Move m = move_list.top ();
		move_list.pop ();
		if MOVE_IS_CAPTURE (b, m.from, m.to) {
			board c = MOVE_ON_DIFFERENT_BOARD (b, m.from, m.to);
			PRINTBOARD (c.all[ALL], m.move_name());
		} else {
			MOVE_ON_SAME_BOARD (b, m.from, m.to);
			PRINTBOARD (b.all[ALL], m.move_name());
			UNMOVE_ON_SAME_BOARD (b, m.from, m.to);
		}
		int input;
		cin>>input;
	}
	
	return 0;
}
