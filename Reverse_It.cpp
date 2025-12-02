// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int cls;
    string sec;
    int id;
};
bool cmp(Student l, Student r)
{
    if (l.id > r.id)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int tc;
    cin >> tc;
    Student arr[tc];
    for (int i = 0; i < tc; i++)
    {
        cin.ignore();
        cin >> arr[i].name >> arr[i].cls >> arr[i].sec >> arr[i].id;
    }
    sort(arr, arr + tc, cmp);
    for (int i = 0; i < tc; i++)
    {
        cout << arr[i].name << " " << arr[i].cls << " " << arr[i].sec << " " << arr[i].id << endl;
    }
    return 0;
}