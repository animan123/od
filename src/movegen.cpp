#include "movegen.h"
#include "constants.h"
#include "utils.h"
#include "board.h"
#include "moves.h"
#include <queue>

MoveList gen_moves (board b, int color) {
	MoveList move_list;
	gen_knight_moves (move_list, b, color);
	gen_king_moves (move_list, b, color);
	return move_list;
}

void gen_knight_moves (MoveList &move_list, board b, int color) {
	bitboard knight_board = b.knight[color];
	int from;
	bitboard knight_move;
	while (knight_board) {
		from = POPLSB_AND_RESET (knight_board);
		knight_move = (knight_moves[from] & (~b.all[color]));
		while (knight_move) {
			int to = POPLSB_AND_RESET (knight_move);
			move_list.push  (Move(from, to));
		}
	}
}

void gen_king_moves (MoveList &move_list, board b, int color) {
	bitboard king_board = b.king[color];
	int from, to;
	bitboard king_move;
	while (king_board) {
		from = POPLSB_AND_RESET (king_board);
		king_move = (king_moves[from] & (~b.all[color]));
		while (king_move) {
			to = POPLSB_AND_RESET (king_move);
			move_list.push (Move(from, to));
		}
	}
	if (color == WHITE) {
		if WHITE_CAN_CASTLE_KING_SIDE(b) {
			move_list.push (Move(from, KING_SIDE_CASTLING));
		}
		if WHITE_CAN_CASTLE_QUEEN_SIDE(b) {
			move_list.push (Move(from, QUEEN_SIDE_CASTLING));
		}
	}
	
	if (color == BLACK) {
		if BLACK_CAN_CASTLE_KING_SIDE(b) {
			move_list.push (Move(from, KING_SIDE_CASTLING));
		}
		if BLACK_CAN_CASTLE_QUEEN_SIDE(b) {
			move_list.push (Move(from, QUEEN_SIDE_CASTLING));
		}
	}
}

