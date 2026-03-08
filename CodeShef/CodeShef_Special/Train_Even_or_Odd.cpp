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
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (i % 2 == 0)
            {
                even += arr[i];
            }
            else
            {
                odd += arr[i];
            }
        }
        cout << max(even, odd) << endl;
    }
    return 0;
}