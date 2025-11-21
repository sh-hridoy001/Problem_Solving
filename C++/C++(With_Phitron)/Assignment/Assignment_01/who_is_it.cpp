#include <bits/stdc++.h>
// #include <string.h>

using namespace std;

// class ---------
class Student
{
public:
    char name[101];
    int roll;
    char section;
    int math_marks;
    int cls;

    // constructor declare korlam -------
    Student(char name[], int roll, char section, int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student s1("Sazzad", 5, 'A', 80, 10);
    Student s2("Hossain", 8, 'B', 88, 10);
    Student s3("Hridoy", 3, 'C', 95, 10);
    int a = s1.math_marks;
    int b = s2.math_marks;
    int c = s3.math_marks;

    if (a > b && a > c)
    {
        cout << s1.name << " " << s1.roll << " " << s1.section << " " << s1.math_marks << " " << s1.cls;
    }
    else if (b > c)
    {
        cout << s2.name << " " << s2.roll << " " << s2.section << " " << s2.math_marks << " " << s2.cls;
    }
    else
    {
        cout << s3.name << " " << s3.roll << " " << s3.section << " " << s3.math_marks << " " << s3.cls;
    }

    return 0;
}
