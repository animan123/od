#ifndef TESTS_H
#define TESTS_H

#include <string>
#include "../src/constants.h"

void test (int condition, std::string message);
#define TEST(c, m) test(c, m)

void print_board (bitboard b, std::string message);
#define PRINTBOARD(b, m) print_board(b, m)

#endif
