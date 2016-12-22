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

//set nth bit of a piece p
void set_bit (piece &p, int n);
#define SET(p, n) set_bit(p, n)

//reset nth bit of a piece p
void reset_bit (piece &p, int n);
#define RESET(p, n) reset_bit(p, n)

#endif
