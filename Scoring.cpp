// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        int point_of_bob = (y - x) / 2;
        int point_of_alice = point_of_bob + x;
        cout << point_of_alice << " " << point_of_bob << endl;
    }

    return 0;
}