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
        int sum = 0;
        while (n != 0)
        {
            int last_num = n % 10;
            sum += last_num;
            n /= 10;
        }

        cout << sum << endl;
    }

    return 0;
}