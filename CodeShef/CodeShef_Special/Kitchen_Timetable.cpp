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
        int arr_a[n];
        int arr_b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr_a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> arr_b[j];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (arr_b[i] <= arr_a[i])
                {
                    count++;
                }
            }
            else
            {
                if (arr_b[i] <= arr_a[i] - arr_a[i-1])
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}