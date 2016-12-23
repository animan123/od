#include <iostream>
#include <string>
#include "tests.h"
#include "../src/constants.h"
using namespace std;

void test (int condition, string message) {
	if (!condition) {
		cout << message << ": FAILED" << endl;
	}
}

void print_board (bitboard b, string message) {
	cout << message << endl;
	for(int start=56; start>=0; start-=8) {
		for(int end=0; end<=7; ++end) {
			cout << ((b & (BITBOARD(1)<<(start+end))) != 0) << " ";
		}
		cout<<endl;
	}
}
