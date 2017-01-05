#ifndef MOVEGEN_H
#define MOVEGEN_H

#include "constants.h"
#include "moves.h"
#include <queue>

MoveList gen_moves (board b, int color);
void gen_knight_moves (MoveList &move_list, board b, int color);
void gen_king_moves (MoveList &move_list, board b, int color);

#endif
