// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int reg;
    float cgpa;

    Student(string name, int roll, int reg, float cgpa)
    {
        this->name = name;
        this->roll = roll;
        this->reg = reg;
        this->cgpa = cgpa;
    }
};

void print(Student s)
{
    cout << s.name << " " << s.roll << " " << s.reg << " " << s.cgpa << endl;
}
int main()
{
    Student s1("Sazzad Hossain Hridoy", 874183, 1502366364, 3.94);
    print(s1);
    
    return 0;
}