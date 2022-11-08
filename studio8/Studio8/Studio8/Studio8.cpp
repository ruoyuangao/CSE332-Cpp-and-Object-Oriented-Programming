// Studio8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    simpleStruct1 ss = simpleStruct1();
    ss.set(12, 7);
    cout << ss.getMember1() << endl;
}
