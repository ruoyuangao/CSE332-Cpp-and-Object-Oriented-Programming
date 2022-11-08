// Studio5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void mySwap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "mySwap version 1" << endl;
}

void mySwap(int* & a, int* & b) {
    int* temp = a;
    a = b;
    b = temp;
    cout << "mySwap version 2" << endl;
}

void mySwap(int* const & a, int* const & b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "mySwap version 3" << endl;
}

int main(int argc, char* argv[])
{
    /*
    * code for question 3 -- pass by reference
    */
    int num1 = 13;
    int num2 = 25;

    int* pointer1 = &num1;
    int* pointer2 = &num2;

    mySwap(num1, num2);

    cout << "num1 = " <<num1<<" num2 = "<<num2 << endl;
    cout << "pointer1 points to " << *pointer1 << " pointer2 points to " << *pointer2 << endl;
    
    /*
    * code for question 4
    */

    num1 = 13;
    num2 = 25;
    pointer1 = &num1;
    pointer2 = &num2;

    mySwap(pointer1, pointer2);

    cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    cout << "pointer1 points to " << *pointer1 << " pointer2 points to " << *pointer2 << endl;

    /*
    * code for question 5
    */

    num1 = 13;
    num2 = 25;
    pointer1 = &num1;
    pointer2 = &num2;
    int* const constPointer1 = &num1;
    int* const constPointer2 = &num2;

    mySwap(constPointer1, constPointer2);

    cout << "num1 = " << num1 << " num2 = " << num2 << endl;
    cout << "pointer1 points to " << *pointer1 << " pointer2 points to " << *pointer2 << endl;
    cout << "constPointer1 points to " << *constPointer1 << " constPointer2 points to " << *constPointer2 << endl;

    return 0;
}
