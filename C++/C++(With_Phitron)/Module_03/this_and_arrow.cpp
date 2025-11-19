// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int cls, int roll, int gpa)
    {
        this->cls = cls;
        this->roll = roll;
        (*this).gpa = gpa;
    }
};

int main()
{
    Student a(5, 02, 4.00);
    Student b(5, 05, 5.00);

    cout << a.cls << " " << a.roll << " " << a.gpa << endl;
    cout << b.cls << " " << b.roll << " " << b.gpa << endl;
    return 0;
}