// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x, p;
    cin >> x >> p;
    double multiplier = (1 - (x / 100));
    double orginal_price = p / multiplier;
    cout <<fixed <<setprecision(2) << orginal_price;
    return 0;
}