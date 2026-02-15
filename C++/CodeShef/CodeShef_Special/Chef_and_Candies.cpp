// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        float n, x;
        // n: number of child , x : number of candies
        cin >> n >> x;
        if (n >= x)
        {
            float candies_pack = ceil((n - x) / 4);
            // if candies_pack float number it will return ceil number.
            cout << candies_pack << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}