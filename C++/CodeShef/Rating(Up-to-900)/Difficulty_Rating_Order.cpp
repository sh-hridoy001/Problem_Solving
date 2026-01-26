// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        cin >> arr[0];
        int val = arr[0];

        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < val)
            {
                flag = false;
            }
            val = arr[i];
        }
        if (flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}