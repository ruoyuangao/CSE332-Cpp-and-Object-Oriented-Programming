
#include<iostream>
#include"Detector.h"

using namespace std;

unsigned int Detector::m2 = 0;

Detector::Detector() {
	m1 = m2;
	m2++;
	cout << "This is the public default constructor" << endl;
	cout << "The object address is: " << this << endl;
	cout << "The value of m1 is: " << m1 << endl;
}

Detector::~Detector() {
	cout << "This is the destructor" << endl;
	cout << "The object address is: " << this << endl;
	cout << "The value of m1 is: " << m1 << endl;
}

unsigned int Detector::get_m1() {
	return m1;
}