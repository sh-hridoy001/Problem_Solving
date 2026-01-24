// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> v[i];
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        int count = 0;
        for (int i = l; i <= r; i++)
        {
            if (v[i] < v[i - 1] && v[i] < v[i + 1])
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}