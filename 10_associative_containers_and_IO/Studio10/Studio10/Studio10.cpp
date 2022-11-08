
#include <iostream>
#include <set>
#include <string>
#include <map>
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    multiset<string> ms;
    multiset<string>::iterator it = ms.begin();
    ostream_iterator<string> outputIter(cout, ", ");
    // copy the additional command line arguments to the multiset
    copy(argv + 1, argv + argc, inserter(ms, it));
    cout << "this is the result of multiset:" << endl;
    copy(ms.begin(), ms.end(), outputIter);
    cout << endl;

    // copy the multiset to the set
    set<string> s;
    copy(ms.begin(), ms.end(), inserter(s, s.begin()));
    cout << "this is the result of set:" << endl;
    copy(s.begin(), s.end(), outputIter);
    cout << endl;
    
    map<string, int> myMap;
    map<string, int>::iterator mapIter = myMap.begin();
    for (auto sit = s.begin(); sit != s.end(); sit++) {
   
    }
    
    //copy(myMap.begin(), myMap.end(), );
    
    return 0;
}