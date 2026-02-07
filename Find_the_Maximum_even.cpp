// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int evenmax1 = -1, evenmax2 = -1;
    int oddmax1 = -1, oddmax2 = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
        {
            if (arr[i] > evenmax1)
            {
                evenmax2 = evenmax1;
                evenmax1 = arr[i];
            }
            else if (arr[i] > evenmax2)
            {
                evenmax2 = arr[i];
            }
        }
        else
        {
            if (arr[i] > oddmax1)
            {
                oddmax2 = oddmax1;
                oddmax1 = arr[i];
            }
            else if (arr[i] > oddmax2)
            {
                oddmax2 = arr[i];
            }
        }
    }
    int ans = -1;
    if (evenmax1 != -1)
    {
        ans = max(ans, evenmax1);
    }
    if (evenmax2 != -1)
    {
        ans = max(ans, evenmax1 + evenmax2);
    }
    if (oddmax2 != -1)
    {
        ans = max(ans, oddmax1 + oddmax2);
    }
    cout << ans;
    return 0;
}