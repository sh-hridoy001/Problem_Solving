// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ques;
    cin >> n >> ques;
    vector<int> v(n + 1);
    vector<long long> pre_v(n + 1); // prefix_sum vector (1 based index)
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre_v[i] = pre_v[i - 1] + v[i]; // pre_v[i=1] ager purjonto sum --
    }
    while (ques--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 1)
        {
            cout << pre_v[r] << endl;
        }
        else
        {

            cout << pre_v[r] - pre_v[l-1] << endl;
        }
    }

    return 0;
}

