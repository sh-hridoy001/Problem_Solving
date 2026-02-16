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
        string arr[n];

        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == "START38")
            {
                s1++;
            }
            else
            {
                s2++;
            }
        }
        cout << s1 << " " << s2 << endl;
    }

    return 0;
}