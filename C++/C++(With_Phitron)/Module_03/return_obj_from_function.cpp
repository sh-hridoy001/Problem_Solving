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

Student func()
{
    Student a(5, 02, 4.00);
    return a;
}
int main()
{
    Student obj = func();
    cout << obj.cls << " " << obj.roll << " " << obj.gpa << endl;
    return 0;
}