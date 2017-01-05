#include "board.h"
#include "constants.h"
#include "utils.h"
#include <string>

board::board () {
	init ();
}

void board::init () {
	all_init ();
	special_init ();
	pawn_init ();
	king_init ();
	queen_init ();
	knight_init ();
	bishop_init ();
	rook_init ();
}

void board::all_init () {
	all[WHITE] = all[BLACK] = all[ALL] = BITBOARD(0);
}

void board::special_init () {
	special[WHITE] = special[BLACK] = BITBOARD(0);
	SET_NOTATION (special[WHITE], "A1");
	SET_NOTATION (special[WHITE], "E1");
	SET_NOTATION (special[WHITE], "H1");
	SET_NOTATION (special[BLACK], "A8");
	SET_NOTATION (special[BLACK], "E8");
	SET_NOTATION (special[BLACK], "H8");
}

void board::pawn_init () {
	pawn[WHITE] = pawn[BLACK] = BITBOARD(0);
	for (char first='A'; first<='H'; ++first) {
		std::string notation(2, first);
		notation[1] = '2';
		SET_NOTATION (pawn[WHITE], notation);
		notation[1] = '7';
		SET_NOTATION (pawn[BLACK], notation);
	}
	pawn[ALL] = pawn[WHITE] | pawn[BLACK];
	all[WHITE] |= pawn[WHITE];
	all[BLACK] |= pawn[BLACK];
	all[ALL] |= pawn[ALL];
}

void board::king_init () {
	king[WHITE] = BITBOARD(0);
	SET_NOTATION (king[WHITE], "E1");
	king[BLACK] = BITBOARD(0);
	SET_NOTATION (king[BLACK], "E8");
	king[ALL] = king[WHITE] | king[BLACK];
	all[WHITE] |= king[WHITE];
	all[BLACK] |= king[BLACK];
	all[ALL] |= king[ALL];
}

void board::queen_init () {
	queen[WHITE] = BITBOARD(0);
	SET_NOTATION (queen[WHITE], "D1");
	queen[BLACK] = BITBOARD(0);
	SET_NOTATION (queen[BLACK], "D8");
	queen[ALL] = queen[WHITE] | queen[BLACK];
	all[WHITE] |= queen[WHITE];
	all[BLACK] |= queen[BLACK];
	all[ALL] |= queen[ALL];
}

void board::knight_init () {
	knight[WHITE] = knight[BLACK] = BITBOARD(0);
	SET_NOTATION (knight[WHITE], "B1");
	SET_NOTATION (knight[WHITE], "G1");
	SET_NOTATION (knight[BLACK], "B8");
	SET_NOTATION (knight[BLACK], "G8");
	knight[ALL] = knight[WHITE] | knight[BLACK];
	all[WHITE] |= knight[WHITE];
	all[BLACK] |= knight[BLACK];
	all[ALL] |= knight[ALL];
}

void board::bishop_init () {
	bishop[WHITE] = bishop[BLACK] = BITBOARD(0);
	SET_NOTATION (bishop[WHITE], "C1");
	SET_NOTATION (bishop[WHITE], "F1");
	SET_NOTATION (bishop[BLACK], "C8");
	SET_NOTATION (bishop[BLACK], "F8");
	bishop[ALL] = bishop[WHITE] | bishop[BLACK];
	all[WHITE] |= bishop[WHITE];
	all[BLACK] |= bishop[BLACK];
	all[ALL] |= bishop[ALL];
}

void board::rook_init () {
	rook[WHITE] = rook[BLACK] = BITBOARD(0);
	SET_NOTATION (rook[WHITE], "A1");
	SET_NOTATION (rook[WHITE], "H1");
	SET_NOTATION (rook[BLACK], "A8");
	SET_NOTATION (rook[BLACK], "H8");
	rook[ALL] = rook[WHITE] | rook[BLACK];
	all[WHITE] |= rook[WHITE];
	all[BLACK] |= rook[BLACK];
	all[ALL] |= rook[ALL];
}

int board::square_color (int index) {
	bitboard b = BITBOARD(0);
	SET (b, index);
	if (b & all[WHITE]) {
		return WHITE;
	} else if (b & all[BLACK]) {
		return BLACK;
	}
	return NOCOLOR;
}

int board::square_piece (int index, int color) {
	if (color == NOCOLOR) {
		return NOPIECE;
	}
	bitboard b = BITBOARD(0);
	SET (b, index);
	if (b & pawn[color]) {
		return PAWN;
	}
	if (b & king[color]) {
		return KING;
	}
	if (b & queen[color]) {
		return QUEEN;
	}
	if (b & knight[color]) {
		return KNIGHT;
	}
	if (b & bishop[color]) {
		return BISHOP;
	}
	if (b & rook[color]) {
		return ROOK;
	}
	return NOPIECE;
}

int board::square_piece (int index) {
	return square_piece (index, square_color(index));
}

bool board::white_can_castle_king_side () {
	return (
		(special[WHITE] & occupancy[INDEX("E1")]) &&
		(special[WHITE] & occupancy[INDEX("H1")]) &&
		(!(all[WHITE] & occupancy[INDEX("F1")])) &&
		(!(all[WHITE] & occupancy[INDEX("G1")]))
	);
}

bool board::white_can_castle_queen_side () {
	return (
		(special[WHITE] & occupancy[INDEX("E1")]) &&
		(special[WHITE] & occupancy[INDEX("A1")]) &&
		(!(all[WHITE] & occupancy[INDEX("B1")])) &&
		(!(all[WHITE] & occupancy[INDEX("C1")])) &&
		(!(all[WHITE] & occupancy[INDEX("D1")]))
	);
}

bool board::black_can_castle_king_side () {
	return (
		(special[BLACK] & occupancy[INDEX("E8")]) &&
		(special[BLACK] & occupancy[INDEX("H8")]) &&
		(!(all[BLACK] & occupancy[INDEX("F8")])) &&
		(!(all[BLACK] & occupancy[INDEX("G8")]))
	);
}

bool board::black_can_castle_queen_side () {
	return (
		(special[BLACK] & occupancy[INDEX("E8")]) &&
		(special[BLACK] & occupancy[INDEX("A8")]) &&
		(!(all[BLACK] & occupancy[INDEX("B8")])) &&
		(!(all[BLACK] & occupancy[INDEX("C8")])) &&
		(!(all[BLACK] & occupancy[INDEX("D8")]))
	);
}

