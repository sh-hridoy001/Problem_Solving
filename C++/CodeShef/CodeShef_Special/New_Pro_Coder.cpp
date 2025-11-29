// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float num, error;
    cin >> num >> error;
    // float half = num / 2;
    if (error >= (num / 2))
    {
        cout << "NEWBIE\n";
    }
    else
    {
        cout << "PRO\n";
    }
    return 0;
}