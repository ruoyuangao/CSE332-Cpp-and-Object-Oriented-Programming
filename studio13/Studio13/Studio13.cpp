// Studio13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Detector.h"
using namespace std;

int access(shared_ptr<Detector>& d) {
	shared_ptr<Detector> p2(d);
	return 0;

}
int main(int argc, char* argv[])
{
	cout << "The begining of main function" << endl<<endl;

	Detector* d = new Detector();

	shared_ptr<Detector> p1(d);

	cout << "The begining of access function" << endl << endl;
	access(p1);
	cout << "The end of access function" << endl << endl;

	shared_ptr<Detector> p3 = make_shared<Detector>();
	shared_ptr<Detector> p4 = make_shared<Detector>();
	shared_ptr<Detector> p5 = make_shared<Detector>();

	vector<shared_ptr<Detector>> vec;

	vec.push_back(p3);
	vec.push_back(p4);
	vec.push_back(p5);

	delete d;


	cout <<endl<< "The end of main function" << endl <<endl;

    return 0;
}
