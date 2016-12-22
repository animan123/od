#include "utils.h"
#include "constants.h"
#include <iostream>
#include <string>
#include <assert.h>

int notation_to_index (std::string notation) {
	assert (notation.length() == 2);
	assert (notation[0] >= 'A' && notation[0] <= 'H');
	assert (notation[1] >= '1' && notation[1] <= '8');

	int index = (notation[1] - '1') * 8 + (notation[0]-'A');
	return index;
}

std::string index_to_notation (int index) {
	assert (index >= 0 && index <= 63);

	std::string notation (2, 'c');
	notation[0] = (index % 8) + 'A';
	notation[1] = (index / 8) + '1';
	return notation;
}

void set_bit (piece &p, int n) {
	p |= (PIECE(1)<<n);
}

void reset_bit (piece &p, int n) {
	p &= (~(PIECE(1)<<n));
}

