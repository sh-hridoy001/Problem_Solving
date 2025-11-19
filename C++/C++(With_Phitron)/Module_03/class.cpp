// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    float gpa;
};

int main()
{
    Student a, b;
    // char Nam[100] = "Sazzad";
    // strcpy(a.name, Nam);
    // a.roll = 874183;
    // a.gpa = 3.94;
    cin >> a.name >> a.roll >> a.gpa;
    cin >> b.name >> b.roll >> b.gpa;
    cout << a.name << " " << a.roll << " " << a.gpa <<endl;
    cout << b.name << " " << b.roll << " " << b.gpa;
    return 0;
}