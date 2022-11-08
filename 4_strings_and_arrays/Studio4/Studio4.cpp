// Studio4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{

    // For Quesiton 2
    unsigned int arr1[2][3][5] = {0};

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 5; ++k) {
                arr1[i][j][k] = i * j * k;
                cout << i << "*" << j << "*" << k << "=" << arr1[i][j][k] << endl;
            }
        }
    }

    // For Question 3

    vector<string> vec1;

    for (int i = 0; i < argc; ++i) {
        vec1.push_back(argv[i]);
    }

    for (int s = 0; s < vec1.size(); ++s) {
        cout << vec1[s] << endl;
    }


    // For Question 4

    string str1;

    for (int i = 0; i < argc; ++i) {
        str1 += argv[i];
        str1 += " ";
    }

    istringstream iss(str1);

    string str2;

    while (iss >> str2) {
        cout << str2 << endl;
    }
   
    // For Question 5

    if (argc <= 3) {
        cout << "The additional command line arguments are:" << endl;
        for (int i = 1; i < argc; ++i) {
            cout << argv[i] << endl;
        }
        return 0;
    }
    else {
        cout << argv[0] << endl;
        cout << "Please rerun the program with 2 additional command line arguments" << endl;
        return 1;
    }
}
