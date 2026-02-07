
// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    long long total_Sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_Sum += a[i];
    }

    long long prefix_Sum = 0;
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {
        prefix_Sum += a[i];
        if (prefix_Sum * 2 == total_Sum)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
