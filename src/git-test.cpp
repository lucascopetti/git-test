//============================================================================
// Name        : git-test.cpp
// Author      : Lucas Copetti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "testclass.h"

using namespace std;

int main() {
	test_class testObject;
	testObject.testInt = 10;
	cout << "!!!Hello World!!!" << testObject.testInt << endl; // prints !!!Hello World!!!
	return 0;
}
