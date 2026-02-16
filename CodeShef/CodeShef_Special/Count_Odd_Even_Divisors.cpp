// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt_odd = 0, cnt_even = 0;
        for (int i = 1; i <= n; i++)
        {
            if ((n % i) == 0)
            {
                if ((i % 2) == 0)
                {
                    cnt_odd++;
                }
                else
                {
                    cnt_even++;
                }
            }
        }
        cout << cnt_even << " " << cnt_odd << endl;
    }

    return 0;
}