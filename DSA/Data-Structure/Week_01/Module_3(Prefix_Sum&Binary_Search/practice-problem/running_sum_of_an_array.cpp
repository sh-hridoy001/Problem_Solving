// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<long long int> pre_v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        pre_v[i] = pre_v[i - 1] + v[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cout << pre_v[i] << " ";
    }
    return 0;
}