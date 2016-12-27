#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <cstdint>

//color based indexing
#define EMPTY -1
#define WHITE 0
#define BLACK 1
#define ALL 2

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

#endif
