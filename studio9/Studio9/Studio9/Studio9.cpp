// Studio9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <algorithm>
using namespace std;

int nums[7] = { 1, 2, 3, 4, 5, 6, 7 };
vector<int> v;
forward_list<int> f;
list<int> l;
deque<int> d;

void trySort() {
    // std::sort need random access
    sort(v.begin(), v.end());
    sort(d.begin(), d.end());
    // for list and foward_list, we cannot use std::sort,
    // instead we can use the member function inside the container
    f.sort();
    l.sort();
}

void tryReverse() {
    reverse(v.begin(), v.end());
    f.reverse();
    l.reverse();
    reverse(d.begin(), d.end());
}
void iterateContainers() {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (forward_list<int>::iterator it = f.begin(); it != f.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    for (deque<int>::iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}
void buildContainers() {
    // 1. vector
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        v.push_back(nums[i]);
    }

    // 2. forward_list
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        f.push_front(nums[i]);
    }

    // 3. list
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (i % 2 == 0) {
            l.push_back(nums[i]);
        }
        else {
            l.push_front(nums[i]);
        }
    }

    // 4. deque
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        if (i % 2 == 0) {
            d.push_back(nums[i]);
        }
        else {
            d.push_front(nums[i]);
        }
    }
}
int main()
{
    //Create sequential containers of the types std::vector<int>, std::forward_list<int>,
    //    std::list<int>, and std::deque<int>.

    

    /*for (int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++) {
        cout << nums[i] << endl;
    }*/

    
    buildContainers();
    
    iterateContainers();

    trySort();

    cout << "After sort" << endl;

    iterateContainers();

    tryReverse();

    cout << "After reverse" << endl;

    iterateContainers();

    return 0;
}
