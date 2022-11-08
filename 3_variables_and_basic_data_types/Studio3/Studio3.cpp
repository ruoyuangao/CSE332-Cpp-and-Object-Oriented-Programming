// Studio3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Program name: " << argv[0] << endl;

	for (const char* p = argv[0]; *p != '\0'; ++p) {
		cout << *p << endl;
	}

	for (auto p = argv[0]; *p != '\0'; ++p) {
		cout << *p << endl;
	}

	for (auto p = argv; *p; ++p) {
		cout << *p << endl;
	}

	return 0;
}