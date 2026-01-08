// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b && a > c)
        {
            cout << "Setter\n";
        }
        else if (b > a && b > c)
        {
            cout << "Tester\n";
        }
        else
        {
            cout << "Editorialist\n";
        }
    }

    return 0;
}