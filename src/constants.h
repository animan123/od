#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <cstdint>

//color based indexing
#define WHITE 0
#define BLACK 1
#define ALL 2

//each bitboard is an unsigned 64 bit integer
#define bitboard uint64_t

//convert integers to bitboard type
#define BITBOARD(x) UINT64_C(x)

#endif
