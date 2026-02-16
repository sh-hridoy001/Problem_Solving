// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt_odd = 0, cnt_even = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            cnt_even++;
        }
        else
        {
            cnt_odd++;
        }
    }
    if (cnt_even > cnt_odd)
    {
        cout << "READY FOR BATTLE\n";
    }
    else
    {
        cout << "NOT READY\n";
    }
    return 0;
}