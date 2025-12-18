// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ques;
    cin >> n >> ques;
    vector<int> v(n + 1);
    int sum = 0;
    vector<int> pre_v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        // pre_v[i] = pre_v[i]+v[i];
        pre_v[i] = pre_v[i-1] + v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << pre_v[i] << endl;
    }
    // for (int x : pre_v)
    // {
    //     cout << x << endl;
    // }
    // cout << sum;
    // while (ques--)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     int sum = 0;
    //     for (int i = a ; i <= b; i++)
    //     {
    //         sum = sum + v[i];
    //     }
    //     cout << sum << endl;
    // }

    return 0;
}