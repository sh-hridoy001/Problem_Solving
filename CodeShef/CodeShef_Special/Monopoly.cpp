// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + 4);
        if (arr[0] + arr[1] + arr[2] < arr[3])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        
    }
    return 0;
}