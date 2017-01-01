#ifndef MOVES_H
#define MOVES_H

#include "constants.h"
#include "board.h"

/* move sanity check */
int move_is_sane (board b, int from, int to);
#define MOVE_IS_SANE(x, y, z) (move_is_sane (x, y, z))

/* is move a capture? */
int move_is_capture (board b, int from, int to);
#define MOVE_IS_CAPTURE(x, y, z) (move_is_capture(x, y, z))

/* Manipulate moving piece in a move */
void set_reset_moving_piece (board &b, int from, int to);
#define SET_RESET_MOVING_PIECE(x, y, z) (set_reset_moving_piece(x, y, z))

/* Manipulate captured piece in a move */
void set_reset_captured_piece (board &b, int from, int to);
#define SET_RESET_CAPTURED_PIECE(x, y, z) (set_reset_captured_piece(x, y, z))

/* move on same board without creating a new board */
void move_on_same_board (board &b, int from, int to);
#define MOVE_ON_SAME_BOARD(x, y, z) (move_on_same_board(x, y, z))
#define UNMOVE_ON_SAME_BOARD(x, y, z) (move_on_same_board(x, z, y))

/* move by creating a new board */
board move_on_different_board(board b, int from, int to);
#define MOVE_ON_DIFFERENT_BOARD(x, y, z) (move_on_different_board(x, y, z))

/* move has to and from indices and a bunch of scores */
class Move {
public:
	int to, from;
	int ordering_score;

	Move (int to, int from);
	void calculate_ordering_score ();
	bool operator < (const Move &M) const;
}

#endif
