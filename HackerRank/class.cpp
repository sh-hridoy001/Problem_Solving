// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    string first_name;
    string last_name;
    int standard;
};
int main()
{
    Student s1;
    cin >> s1.age;
    cin >> s1.first_name;
    cin >> s1.last_name;
    cin >> s1.standard;

    cout << s1.age << endl;
    cout << s1.last_name << ", " << s1.first_name << endl;
    cout << s1.standard << endl;
    cout << endl;
    cout << s1.age << "," << s1.first_name << "," << s1.last_name << "," << s1.standard;
    return 0;
}