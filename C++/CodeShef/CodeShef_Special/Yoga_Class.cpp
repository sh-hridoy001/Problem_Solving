// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while ((tc--))
    {
        int n, x, y;
        cin >> n >> x >> y;
        if (x * 2 >= y)
        {
            cout << n * x << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                cout << n / 2 * y << endl;
            }
            else
            {
                if (n % 2 == 0)
                {
                    cout << (n/2) * y << endl;
                }
                else 
                {
                    cout << ((n - 1) / 2) * y + x << endl;
                }
            }
        }
    }

    return 0;
}