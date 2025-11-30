// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, arr[i].name);
        cin >> arr[i].roll >> arr[i].marks;
    }
    int mn = INT_MAX;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].marks < mn)
        {
            mn = arr[i].marks;
            idx = i;
        }
    }
    cout << arr[idx].name << " " << arr[idx].roll << " " << arr[idx].marks;
    return 0;
}