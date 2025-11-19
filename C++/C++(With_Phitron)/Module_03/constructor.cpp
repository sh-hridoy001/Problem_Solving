// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int cls;
    int roll;
    double gpa;

    Student(int c, int r, int g)
    {
        cls = c;
        roll = r;
        gpa = g;
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