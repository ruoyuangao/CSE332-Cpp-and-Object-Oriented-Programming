#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    unsigned int ID;

};

ostream& operator<<(ostream& out, const Student& s) {
    out << "name:" << s.name << " ID:" << s.ID;
    return out;
}

int main()
{
    Student stu1 = { "Kelly", 499779 };
    Student stu2 = { "Alice", 488293 };
    Student stu3 = { "Diane", 348921 };
    vector<Student> vec;
    vec.push_back(stu1);
    vec.push_back(stu2);
    vec.push_back(stu3);
    cout << stu1 << endl;
    ostream_iterator<Student> outputIter(cout, ", ");
    copy(vec.begin(), vec.end(), outputIter);
    return 0;
}
