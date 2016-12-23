#include "board.h"
#include "constants.h"
#include "utils.h"
#include <string>

board::board () {
	pawn_init ();
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
