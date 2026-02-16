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
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans = ans ^ arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}