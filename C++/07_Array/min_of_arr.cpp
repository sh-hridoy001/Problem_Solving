// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 5, 46, 7, 6};
    int n = sizeof(arr) / 4;

    int mn = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    cout << mn;
    return 0;
}