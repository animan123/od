#include "board.h"
#include "constants.h"
#include "utils.h"
#include <string>

board::board () {
	all = 0;
	pawn_init ();
	king_init ();
	queen_init ();
}

void board::pawn_init () {
	pawn[WHITE] = pawn[BLACK] = 0;
	for (char first='A'; first<='H'; ++first) {
		std::string notation(2, first);
		notation[1] = '2';
		SET_NOTATION (pawn[WHITE], notation);
		notation[1] = '7';
		SET_NOTATION (pawn[BLACK], notation);
	}
	pawn[ALL] = pawn[WHITE] | pawn[BLACK];
	all |= pawn[ALL];
}

void board::king_init () {
	king[WHITE] = 0;
	SET_NOTATION (king[WHITE], "E1");
	king[BLACK] = 0;
	SET_NOTATION (king[BLACK], "E8");
	king[ALL] = king[WHITE] | king[BLACK];
	all |= king[ALL];
}

void board::queen_init () {
	queen[WHITE] = 0;
	SET_NOTATION (queen[WHITE], "D1");
	queen[BLACK] = 0;
	SET_NOTATION (queen[BLACK], "D8");
	queen[ALL] = queen[WHITE] | queen[BLACK];
	all |= queen[ALL];
}
