// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char section;
    int total_mark;
};

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        Student x, y, z;
        cin >> x.id >> x.name >> x.section >> x.total_mark;
        cin >> y.id >> y.name >> y.section >> y.total_mark;
        cin >> z.id >> z.name >> z.section >> z.total_mark;
        Student best = x;
        if (y.total_mark > best.total_mark || (y.total_mark == best.total_mark && y.id < best.id))
        {
            best = y;
        }
        else if (z.total_mark > best.total_mark || (z.total_mark == best.total_mark && z.id < best.id))
        {
            best = z;
        }
        cout << best.id << " " << best.name << " " << best.section << " " << best.total_mark;
        cout << endl;
    }

    return 0;
}
