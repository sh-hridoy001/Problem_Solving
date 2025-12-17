// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int value = arr[k - 1];
        sort(arr, arr + n);
        int idx;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == value)
            {
                idx = i + 1;
            }
        }
        cout << idx << endl;
    }

    return 0;
}