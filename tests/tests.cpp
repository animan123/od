#include <iostream>
#include <string>
#include "tests.h"
using namespace std;

void test (int condition, string message) {
	if (!condition) {
		cout << message << ": FAILED" << endl;
	}
}
