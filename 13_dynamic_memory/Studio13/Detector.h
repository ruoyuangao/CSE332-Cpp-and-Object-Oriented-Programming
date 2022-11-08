#pragma once
#include<iostream>
using namespace std;

class Detector {
public:
	Detector();
	~Detector();
	unsigned int get_m1();

private:
	unsigned int m1;
	static unsigned int m2;
};