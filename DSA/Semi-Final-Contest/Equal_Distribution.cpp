// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, p, total, extra;
    cin >> n >> p;
    total = (p / n);
    extra = p - (total * n);
    cout << total << " " << extra;
    return 0;
}