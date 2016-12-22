#include "../src/utils.h"
#include "tests.h"
#include <string>
#include <iostream>
using namespace std;

int main () {
	int counter = 0;
	for (char second = '1'; second <= '8'; ++second) {
		for (char first = 'A'; first <= 'H'; ++first) {
			string nota (2, 'a');
			nota[0] = first;
			nota[1] = second;
			test (INDEX(nota) == counter, "Index test for " + nota);
			counter += 1;
		}
	}

	counter = 0;
	for (char second = '1'; second <= '8'; ++second) {
		for (char first = 'A'; first <= 'H'; ++first) {
			string nota (2, 'a');
			nota[0] = first;
			nota[1] = second;
			string x = NOTATION (counter);
			test (x == nota, "Notation test for " + nota);
			counter += 1;
		}
	}

	return 0;
}
