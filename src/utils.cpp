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

void set_bit (bitboard &b, int n) {
	assert (n >= 0 && n <= 63);

	b |= (BITBOARD(1)<<n);
}

void reset_bit (bitboard &b, int n) {
	assert (n >= 0 && n <= 63);

	b &= (~(BITBOARD(1)<<n));
}

int pop_LSB_bit (bitboard b) {
	assert (b != BITBOARD(0));

	for (int i=0; i<64; ++i) {
		if (b & (BITBOARD(1)<<i)) {
			return i;
		}
	}
}

int pop_LSB_bit_and_reset_bit (bitboard &b) {
	assert (b != BITBOARD(0));

	int index = POPLSB (b);
	RESET (b, index);
	return index;
}

int pop_MSB_bit (bitboard b) {
	assert (b != BITBOARD(0));

	for (int i=63; i>=0; --i) {
		if (b & (BITBOARD(1)<<i)) {
			return i;
		}
	}
}

int other_color (int color) {
	assert (color == WHITE || color == BLACK);

	if (color == BLACK) {
		return WHITE;
	}
	return BLACK;
}
