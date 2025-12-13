// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mx = max(arr[i], mx);
        }

        cout << mx << endl;
    }

    return 0;
}