// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double x, y;
        cin >> x >> y;
        int buying_price = (x - y);
        int selling_price = x + (x * (10.0 / 100));
        cout << selling_price- buying_price << endl;
    }

    return 0;
}