// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int fact = 1;
        for (int i = n; i >0; i--)
        {
            fact = fact * i;
        }
        cout << fact << endl;
    }
    return 0;
}