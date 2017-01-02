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

//Pop single bit closest to LSB (does not reset bit)
int pop_LSB_bit (bitboard b);
#define POPLSB(b) pop_LSB_bit(b)

//Pop LSB and Reset bit
int pop_LSB_bit_and_reset_bit (bitboard &b);
#define POPLSB_AND_RESET(b) (pop_LSB_bit_and_reset_bit(b))

//Pop single bit closest to MSB (does not reset bit)
int pop_MSB_bit (bitboard b);
#define POPMSB(b) pop_MSB_bit(b)

//Pop MSB and Reset bit
int pop_MSB_bit_and_reset_bit (bitboard &b);
#define POPMSB_AND_RESET(b) (pop_MSB_bit_and_reset_bit(b))

int other_color (int color);
#define OTHER_COLOR(x) (other_color(x))

#endif
