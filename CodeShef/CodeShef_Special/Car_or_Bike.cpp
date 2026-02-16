// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int bike, car;
        cin >> bike >> car;
        if (bike < car)
        {
            cout << "BIKE\n";
        }
        else if (car < bike)
        {
            cout << "CAR\n";
        }
        else
        {
            cout << "SAME\n";
        }
    }
    return 0;
}