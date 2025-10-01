// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r;
    cin >> n >> r;
    long long a = 1;
    for (int i = 1; i <= n; i++)
    {
        a = a * i;
    }
    long long b = 1;
    for (int i = 1; i <= r; i++)
    {
        b *= i;
    }
    long long c = 1;
    for (int i = 1; i <= n - r; i++)
    {
        c *= i;
    }
    cout << "nCr = " << a / (b * c);
    return 0;
}