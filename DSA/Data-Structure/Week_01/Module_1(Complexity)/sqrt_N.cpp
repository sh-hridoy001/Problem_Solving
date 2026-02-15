// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= sqrt(n); i++) // sqrt(n)  eta ke (i*i<=n) lekha jay
    {
        if (n % i == 0)
        {
            cout << i << " "<<n/i<<" ";
        }
    }
    return 0;
}