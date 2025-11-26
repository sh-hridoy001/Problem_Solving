// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int reg;
    float gpa;
    string blood;

    Student(string name, int roll, int reg, float gpa, string blood)
    {
        this->name = name;
        this->roll = roll;
        this->reg = reg;
        this->gpa = gpa;
        this->blood = blood;
    }
};

// sohoje function diye print korar jonno ----
void print(Student s)
{
    cout << s.name << " " << s.roll << " " << s.reg << " " << s.gpa << " " << s.blood << endl;
}
int main()
{
    Student s1("Sazzad", 874183, 1502366364, 3.94, "AB+");
    Student s2("Hossain", 874184, 1502366365, 3.95, "B+");
    Student s3("Hridoy", 874185, 1502366366, 3.96, "A+");

    // manually print ----
    // cout << s1.name << " " << s1.roll << " " << s1.reg << " " << s1.gpa << " " << s1.blood <<endl;

    // using function print 
    print(s1);
    print(s2);
    print(s3);

    return 0;
}