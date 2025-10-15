// author: Sazzad
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

    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            cout << arr[j] + 10 << " ";
        }
        else
        {
            cout << arr[j] * 2 << " ";
        }
    }
    return 0;
}