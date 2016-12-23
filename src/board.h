#ifndef BOARD_H
#define BOARD_H

#include "constants.h"

class board {
public:
	bitboard all;
	bitboard pawn[3];
	bitboard king[3];
	bitboard queen[3];

	board ();
	void pawn_init ();
	void king_init ();
	void queen_init ();
};

#endif
