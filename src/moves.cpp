#include "moves.h"
#include "constants.h"
#include "board.h"
#include "utils.h"
#include <assert.h>
#include <string>

int move_is_sane (board b, int from, int to) {
	int from_color = COLOR_OF_PIECE_ON (b, from);
	if (to == KING_SIDE_CASTLING) {
		if (from_color == WHITE) {
			return WHITE_CAN_CASTLE_KING_SIDE (b);
		} else if (from_color == BLACK) {
			return BLACK_CAN_CASTLE_KING_SIDE (b);
		}
		return 0;
	}
	if (to == QUEEN_SIDE_CASTLING) {
		if (from_color == WHITE) {
			return WHITE_CAN_CASTLE_QUEEN_SIDE (b);
		} else if (from_color == BLACK) {
			return BLACK_CAN_CASTLE_QUEEN_SIDE (b);
		}
		return 0;
	}
	int to_color = COLOR_OF_PIECE_ON (b, to);
	int from_piece = PIECE_ON (b, from);
	return (
		(from_color != NOCOLOR) &&
		(from_color != to_color) &&
		(from_piece != NOPIECE)
	);
}

int move_is_capture (board b, int from, int to) {
	return (
		(to == KING_SIDE_CASTLING) ||
		(to == QUEEN_SIDE_CASTLING) ||
		(PIECE_ON(b, to) != NOPIECE) 
	);
}

void set_reset_moving_piece(board &b, int from, int to) {
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

void set_reset_captured_piece (board &b, int from, int to) {
	int piece = PIECE_ON (b, to);
	int piece_color = COLOR_OF_PIECE_ON (b, to);
	RESET (b.all[piece_color], to);
	RESET (b.all[ALL], to);
	switch (piece) {
		case PAWN:
			RESET (b.pawn[piece_color], to);
			RESET (b.pawn[ALL], to);
			break;
		case ROOK:
			RESET (b.rook[piece_color], to);
			RESET (b.rook[ALL], to);
			break;
		case KNIGHT:
			RESET (b.knight[piece_color], to);
			RESET (b.knight[ALL], to);
			break;
		case BISHOP:
			RESET (b.bishop[piece_color], to);
			RESET (b.bishop[ALL], to);
			break;
		case KING:
			RESET (b.king[piece_color], to);
			RESET (b.king[ALL], to);
			break;
		case QUEEN:
			RESET (b.queen[piece_color], to);
			RESET (b.queen[ALL], to);
	}
}

void move_on_same_board (board &b, int from, int to) {
	assert (MOVE_IS_SANE(b, from, to));
	assert (!MOVE_IS_CAPTURE(b, from, to));
	SET_RESET_MOVING_PIECE (b, from, to);
}

board move_on_different_board (board b, int from, int to) {
	assert (MOVE_IS_SANE(b, from, to));
	assert (MOVE_IS_CAPTURE(b, from, to));
	board c = b;
	if (to == KING_SIDE_CASTLING) {
		/* King side castling */
		int from_color = COLOR_OF_PIECE_ON (c, from);
		if (from_color == WHITE) {
			MOVE_ON_SAME_BOARD (c, INDEX("E1"), INDEX("G1"));
			MOVE_ON_SAME_BOARD (c, INDEX("H1"), INDEX("F1"));
		} else {
			MOVE_ON_SAME_BOARD (c, INDEX("E8"), INDEX("G8"));
			MOVE_ON_SAME_BOARD (c, INDEX("H8"), INDEX("F8"));
		}
	}
	else if (to == QUEEN_SIDE_CASTLING) {
		/* Queen side castling */
		int from_color = COLOR_OF_PIECE_ON (c, from);
		if (from_color == WHITE) {
			MOVE_ON_SAME_BOARD (c, INDEX("E1"), INDEX("C1"));
			MOVE_ON_SAME_BOARD (c, INDEX("A1"), INDEX("D1"));
		} else {
			MOVE_ON_SAME_BOARD (c, INDEX("E8"), INDEX("C8"));
			MOVE_ON_SAME_BOARD (c, INDEX("A8"), INDEX("D8"));
		}
	} else {
		/* Normal capture move */
		SET_RESET_CAPTURED_PIECE (c, from, to);
		SET_RESET_MOVING_PIECE (c, from, to);
	}
	return c;
}

Move::Move (int _from, int _to) {
	to = _to;
	from = _from;
	calculate_ordering_score ();
}

void Move::calculate_ordering_score () {
	ordering_score = 1;
}

bool Move::operator < (const Move &m) const {
	return (this->ordering_score < m.ordering_score);
}

std::string Move::move_name () {
	if (to == KING_SIDE_CASTLING) {
		return (NOTATION(from) + " king side castling");
	}
	if (to == QUEEN_SIDE_CASTLING) {
		return (NOTATION(from) + " queen side castling");
	}
	return (NOTATION(from) + " to " + NOTATION(to));
}
