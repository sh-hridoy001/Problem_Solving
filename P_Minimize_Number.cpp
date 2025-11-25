// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            while (arr[i] % 2 == 0 && arr[i] > 0)
            {
                arr[i] = arr[i] / 2;
            }
            total++;
        }
        cout << total;
    }
    else
    {
        cout << "0";
    }
    return 0;
}