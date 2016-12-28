#include "moves.h"
#include "constants.h"
#include "board.h"
#include "utils.h"

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
