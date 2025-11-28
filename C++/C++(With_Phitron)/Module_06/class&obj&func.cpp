// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int eng_mark;
    int math_mark;

    Student(string name, int roll,int eng_mark,int math_mark)
    {
        
        this->name = name;
        this->roll = roll;
        this->eng_mark = eng_mark;
        this->math_mark = math_mark;
        
    }
    void total()
    {
        cout<<"Total mark of "<<name <<" = "<<eng_mark+math_mark<<endl;
    }
};

int main()
{
    Student s1("Sazzad Hossain", 874183, 96, 98);
    Student s2("SH_Hridoy", 874184, 90, 99);
    s1.total();
    s2.total();

    return 0;
}