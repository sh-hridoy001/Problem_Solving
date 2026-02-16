// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    if (a * b * c > n * n * n)
    {
        cout << "Cuboid";
    }
    else if (a * b * c < n * n * n)
    {
        cout << "Cube";
    }
    else
    {
        cout << "Equal";
    }
    return 0;
}