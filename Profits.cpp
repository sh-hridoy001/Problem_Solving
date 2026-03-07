// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, x, sum = 0, customer = 0;
        cin >> n >> x;
        for (int i = x; i <= n; i++)
        {
            sum = sum + i;
            customer++;
        }
        cout << sum - (customer * x) << endl;
    }
    return 0;
}