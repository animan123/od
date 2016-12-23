#include "../src/constants.h"
#include "../src/moves.h"
#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	int unnecessary_input;
	PRINTBOARD (bishop_moves[NORTHWEST][INDEX("A1")], "NORTHWEST from A1");
	PRINTBOARD (bishop_moves[NORTHWEST][INDEX("D1")], "NORTHWEST from D1");
	PRINTBOARD (bishop_moves[NORTHWEST][INDEX("H5")], "NORTHWEST from H5");
	PRINTBOARD (bishop_moves[NORTHWEST][INDEX("H7")], "NORTHWEST from H7");
	
	cout << "Press any key.." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (bishop_moves[NORTHEAST][INDEX("D4")], "NORTHEAST from D4");
	PRINTBOARD (bishop_moves[NORTHEAST][INDEX("H1")], "NORTHEAST from H1");
	PRINTBOARD (bishop_moves[NORTHEAST][INDEX("C5")], "NORTHEAST from C5");
	PRINTBOARD (bishop_moves[NORTHEAST][INDEX("G7")], "NORTHEAST from G7");

	cout << "Press any key.." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (bishop_moves[SOUTHEAST][INDEX("D7")], "SouthEast from D7");
	PRINTBOARD (bishop_moves[SOUTHEAST][INDEX("G1")], "SouthEast from G1");
	PRINTBOARD (bishop_moves[SOUTHEAST][INDEX("D5")], "SouthEast from D5");
	PRINTBOARD (bishop_moves[SOUTHEAST][INDEX("H7")], "SouthEast from H7");

	cout << "Press any key.." << endl;
	cin >> unnecessary_input;
	PRINTBOARD (bishop_moves[SOUTHWEST][INDEX("D7")], "SOUTHWest from D7");
	PRINTBOARD (bishop_moves[SOUTHWEST][INDEX("H4")], "SOUTHWest from H4");
	PRINTBOARD (bishop_moves[SOUTHWEST][INDEX("E5")], "SOUTHWest from E5");
	PRINTBOARD (bishop_moves[SOUTHWEST][INDEX("B2")], "SOUTHWest from B2");
	return 0;
}
