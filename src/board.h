#ifndef BOARD_H
#define BOARD_H

#include "constants.h"

class board {
public:
	bitboard all;
	bitboard pawn[3];

	board ();
	void pawn_init ();
};

#endif
