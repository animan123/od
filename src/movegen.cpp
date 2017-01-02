#include "movegen.h"
#include "constants.h"
#include "utils.h"
#include "board.h"
#include "moves.h"
#include <queue>

MoveList gen_moves (board b, int color) {
	MoveList move_list;
	gen_knight_moves (move_list, b, color);
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

