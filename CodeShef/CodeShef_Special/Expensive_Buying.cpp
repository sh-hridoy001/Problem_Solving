// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        cin >> n >> a;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int sum = 0;
        for (int i = 0; i < a; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}