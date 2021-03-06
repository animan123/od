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
	bitboard special[2];

	/* Initialization functions */
	board ();
	void init ();
	void all_init ();
	void special_init ();
	void pawn_init ();
	void king_init ();
	void queen_init ();
	void knight_init ();
	void bishop_init ();
	void rook_init ();

	/* Determine which color piece on square */
	int square_color (int index);

	/* Determine which piece on square */
	int square_piece (int index, int color);
	int square_piece (int index);

	/* Castling priviledge check */
	bool white_can_castle_king_side ();
	bool white_can_castle_queen_side ();
	bool black_can_castle_king_side ();
	bool black_can_castle_queen_side ();
};

#define COLOR_OF_PIECE_ON(b, index) (b.square_color(index))
#define PIECE_ON(b, index) (b.square_piece(index))
#define WHITE_CAN_CASTLE_KING_SIDE(b) (b.white_can_castle_king_side())
#define WHITE_CAN_CASTLE_QUEEN_SIDE(b) (b.white_can_castle_queen_side())
#define BLACK_CAN_CASTLE_KING_SIDE(b) (b.black_can_castle_king_side())
#define BLACK_CAN_CASTLE_QUEEN_SIDE(b) (b.black_can_castle_queen_side())
#define RESET_BOARD(b) (b.init())

#endif
