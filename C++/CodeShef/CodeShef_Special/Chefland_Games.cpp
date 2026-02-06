// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        bool flag = true;
        for (int x : arr)
        {
            cin >> x;
            if (x != 0)
            {
                flag = false;
            }
        }
        if (flag)
            cout << "IN\n";
        else
            cout << "OUT\n";
    }

    return 0;
}