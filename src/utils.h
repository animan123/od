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

#endif
