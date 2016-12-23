#ifndef UTILS_H
#define UTILS_H

#include <string>
#include "constants.h"

// function to convert notation into equivalent index.
int notation_to_index (std::string notation);
#define INDEX(x) notation_to_index(x)

//function to convert index into notation.
std::string index_to_notation (int index);
#define NOTATION(x) index_to_notation(x)

//set nth bit of a bitboard b
void set_bit (bitboard &b, int n);
#define SET(b, n) set_bit(b, n)
#define SET_NOTATION(b, notation) (SET(b, INDEX(notation)))

//reset nth bit of a bitboard b
void reset_bit (bitboard &b, int n);
#define RESET(b, n) reset_bit(b, n)
#define RESET_NOTATION(b, notation) (RESET(b, INDEX(notation)))

//Pop one single bit closest to LSB (does not reset bit)
int pop_LSB_bit (bitboard b);
#define POPCNT(b) pop_LSB_bit(b)

#endif
