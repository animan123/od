#ifndef BOARD_H
#define BOARD_H

#include "constants.h"

class board {
public:
	bitboard all[3];
	bitboard pawn[3];
	bitboard king[3];
	bitboard queen[3];
	bitboard knight[3];
	bitboard bishop[3];
	bitboard rook[3];

	board ();
	void all_init ();
	void pawn_init ();
	void king_init ();
	void queen_init ();
	void knight_init ();
	void bishop_init ();
	void rook_init ();
};

#endif
