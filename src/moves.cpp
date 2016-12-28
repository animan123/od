#include "moves.h"
#include "constants.h"
#include "board.h"
#include "utils.h"
#include <assert.h>

int move_is_sane (board b, int from, int to) {
	int from_color = COLOR_OF_PIECE_ON (b, from);
	int to_color = COLOR_OF_PIECE_ON (b, to);
	int from_piece = PIECE_ON (b, from);
	return (
		(from_color != NOCOLOR) &&
		(from_color != to_color) &&
		(from_piece != NOPIECE)
	);
}

int move_is_capture (board b, int from, int to) {
	return (PIECE_ON(b, to) != NOPIECE);
}

void move_on_same_board (board &b, int from, int to) {
	assert (MOVE_IS_SANE(b, from, to));
	assert (!MOVE_IS_CAPTURE(b, from, to));
	int piece_color = COLOR_OF_PIECE_ON (b, from);
	int piece = PIECE_ON (b, from);
	RESET (b.all[piece_color], from);
	RESET (b.all[ALL], from);
	SET (b.all[piece_color], to);
	SET (b.all[ALL], to);
	switch (piece) {
		case PAWN:
			RESET (b.pawn[piece_color], from);
			RESET (b.pawn[ALL], from);
			SET (b.pawn[piece_color], to);
			SET (b.pawn[ALL], to);
			break;
		case ROOK:
			RESET (b.rook[piece_color], from);
			RESET (b.rook[ALL], from);
			SET (b.rook[piece_color], to);
			SET (b.rook[ALL], to);
			break;
		case KNIGHT:
			RESET (b.knight[piece_color], from);
			RESET (b.knight[ALL], from);
			SET (b.knight[piece_color], to);
			SET (b.knight[ALL], to);
			break;
		case BISHOP:
			RESET (b.bishop[piece_color], from);
			RESET (b.bishop[ALL], from);
			SET (b.bishop[piece_color], to);
			SET (b.bishop[ALL], to);
			break;
		case KING:
			RESET (b.king[piece_color], from);
			RESET (b.king[ALL], from);
			SET (b.king[piece_color], to);
			SET (b.king[ALL], to);
			break;
		case QUEEN:
			RESET (b.queen[piece_color], from);
			RESET (b.queen[ALL], from);
			SET (b.queen[piece_color], to);
			SET (b.queen[ALL], to);
	}
}
