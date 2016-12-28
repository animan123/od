#include "../src/constants.h"
#include "../src/movegen.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	int unnecessary_input;
	PRINTBOARD (rook_moves[NORTH][INDEX("A1")], "North from A1");
	PRINTBOARD (rook_moves[NORTH][INDEX("D1")], "North from D1");
	PRINTBOARD (rook_moves[NORTH][INDEX("H5")], "North from H5");
	PRINTBOARD (rook_moves[NORTH][INDEX("H7")], "North from H7");
	
	cout << "Press any key for South tests .." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (rook_moves[SOUTH][INDEX("D4")], "South from D4");
	PRINTBOARD (rook_moves[SOUTH][INDEX("H1")], "South from H1");
	PRINTBOARD (rook_moves[SOUTH][INDEX("H5")], "South from H5");
	PRINTBOARD (rook_moves[SOUTH][INDEX("G7")], "South from G7");

	cout << "Press any key for East tests .." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (rook_moves[EAST][INDEX("D1")], "East from D1");
	PRINTBOARD (rook_moves[EAST][INDEX("G1")], "East from G1");
	PRINTBOARD (rook_moves[EAST][INDEX("D5")], "East from D5");
	PRINTBOARD (rook_moves[EAST][INDEX("H7")], "East from H7");

	cout << "Press any key for West tests .." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (rook_moves[WEST][INDEX("D1")], "West from D1");
	PRINTBOARD (rook_moves[WEST][INDEX("H1")], "West from H1");
	PRINTBOARD (rook_moves[WEST][INDEX("E5")], "West from E5");
	PRINTBOARD (rook_moves[WEST][INDEX("B7")], "West from B7");
	return 0;
}
