#include <bits/stdc++.h>
// #include <string.h>
// ID, Name, Section, Total Marks

using namespace std;

// class ---------
class Student
{
public:
    int id;
    char name[101];
    char section;
    int total_marks;

    // constructor declare korlam -------
    Student(int id, char name[], char section, int total_marks)
    {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }
};

int main()
{
    Student s1(1, "Sazzad", 'A', 80);
    Student s2(2, "Hossain", 'B', 88);
    Student s3(3, "Hridoy", 'C', 95);
    int a = s1.total_marks;
    int b = s2.total_marks;
    int c = s3.total_marks;

    if (a > b && a > c)
    {
        cout << s1.id << " " << s1.name << " " << s1.section << " " << s1.total_marks;
    }
    else if (b > c)
    {
        cout << s2.id << " " << s2.name << " " << s2.section << " " << s2.total_marks;
    }
    else
    {
        cout << s3.id << " " << s3.name << " " << s3.section << " " << s3.total_marks;
    }

    return 0;
}
