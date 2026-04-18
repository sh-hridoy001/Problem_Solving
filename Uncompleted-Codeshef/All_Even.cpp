// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int N;
        cin >> N;

        int sum = 0;
        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}