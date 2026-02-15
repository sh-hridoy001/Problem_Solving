// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ques;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cin >> ques;
    while (ques--)
    {
        int l = 0, r = n - 1, value;

        cin >> value;
        int flag = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] == value)
            {
                flag = 1;
                break;
            }
            else if (v[mid] < value)
            {

                l = mid + 1;
            }
            else if (v[mid] > value)
            {
                r = mid - 1;
            }
        }
        if (flag == 1)
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