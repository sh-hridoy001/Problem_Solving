// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a * 100 >= b * 10)
        {
            cout << "Cloth\n";
        }
        else
        {
            cout << "Disposable\n";
        }
    }

    return 0;
}