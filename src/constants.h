#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <cstdint>

//colors
#define WHITE 0
#define BLACK 1
#define ALL 2
#define NOCOLOR 3

//pieces
#define PAWN 0
#define ROOK 1
#define KNIGHT 2
#define BISHOP 3
#define KING 4
#define QUEEN 5
#define NOPIECE 6

//each bitboard is an unsigned 64 bit integer
#define bitboard uint64_t

//convert integers to bitboard type
#define BITBOARD(x) UINT64_C(x)

//Rook directions
#define NORTH 0
#define EAST 1
#define SOUTH 2
#define WEST 3

//Bishop directions
#define NORTHWEST 0
#define NORTHEAST 1
#define SOUTHEAST 2
#define SOUTHWEST 3

//Macro for castling moves
#define KING_SIDE_CASTLING 64
#define QUEEN_SIDE_CASTLING 65

//Has the king moved?
#define WHITE_KING_HAS_MOVED BITBOARD(16)
#define BLACK_KING_HAS_MOVED BITBOARD(1152921504606846976)

#endif
