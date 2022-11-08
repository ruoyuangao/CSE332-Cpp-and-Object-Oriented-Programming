// Studio6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <exception>
using namespace std;

int squareElement(vector<int>& a, unsigned int b) {
    if (b >= a.size()) {
        throw out_of_range("index out of bounds");
    }
    //return a.at(b) * a.at(b);
    return a[b] * a[b];
}

int divideSquaredElements(vector<int>& vec, unsigned int a, unsigned int b) {
    int num1 = vec.at(a);
    int num2 = vec.at(b);
    if (num2 == 0) {
        throw exception("We cannot divided by zero");
    }
    return num1 / num2;
   /* return vec.at(a) / vec.at(b);*/

}

int main(int argc, char* argv[])
{
    vector<int> vec;
    vec.push_back(0);
    vec.push_back(13);
    vec.push_back(5);

    // For Question 2
    //try {
    //    int ans = squareElement(vec, 3);
    //    //cout << ans << endl;
    //}
    //catch (out_of_range& e) {
    //    cout << "Exception caught: " << endl;
    //    cout << e.what() << endl;
    //    return -1;
    //}

    // For Question 3
    try {
        int ans = divideSquaredElements(vec, 4, 0);
    }
    catch (const out_of_range& e) {
        cout << "There is a logic error" << endl;
        return -1;
    }
    catch (const logic_error& e) {
        cout << "Exception caught: " << endl;
        cout << e.what() << endl;
        return -1;
    }
    
    
    
    
    return 0;
}
