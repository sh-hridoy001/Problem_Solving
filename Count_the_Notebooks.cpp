// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int pulp;
        cin >> pulp;
        int paper = pulp * 1000;
        int noteBook = paper / 100;
        cout << noteBook << endl;
    }

    return 0;
}