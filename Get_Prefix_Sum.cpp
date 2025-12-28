// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<long long int> pre_v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    pre_v[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        pre_v[i] = pre_v[i - 1] + v[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << pre_v[i] << " ";
    }
    return 0;
}