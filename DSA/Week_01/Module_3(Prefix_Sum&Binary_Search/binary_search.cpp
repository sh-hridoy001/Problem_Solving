// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tc;
    cin >> n >> tc;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (tc--)
    {
        int find_value;
        cin>> find_value;
        int l = 0, r = n - 1;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] == find_value)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < find_value)
            {
                l = mid + 1;
            }
            else if (v[mid] > find_value)
            {
                r = mid - 1;
            }
        }

        if (flag == 1)
        {
            cout << "found\n";
        }
        else
        {
            cout << "not found\n";
        }
    }

    return 0;
}