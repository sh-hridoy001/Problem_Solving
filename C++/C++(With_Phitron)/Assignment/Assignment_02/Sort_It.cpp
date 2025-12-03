// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
// Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
class Student
{
public:
    string nm;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student a, Student b)
{
    int total_marks_a = a.eng_marks + a.math_marks;
    int total_marks_b = b.eng_marks + b.math_marks;
    // if (total_marks_a > total_marks_b)
    // {
    //     return true;
    // }

    // if (total_marks_a == total_marks_b)
    // {
    //     return a.id < b.id;
    // }
    // return total_marks_a > total_marks_b;

    if (total_marks_a != total_marks_b)
    {
        return total_marks_a > total_marks_b;
    }
    else
    {
        return a.id < b.id;
    }
}
int main()
{
    int tc;
    cin >> tc;
    Student arr[tc];
    for (int i = 0; i < tc; i++)
    {
        // cin.ignore();
        cin >> arr[i].nm >> arr[i].cls >> arr[i].sec >>
            arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }
    sort(arr, arr + tc, cmp);

    for (int i = 0; i < tc; i++)
    {

        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].sec
             << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }
    return 0;
}