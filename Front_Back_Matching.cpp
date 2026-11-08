// author: Sazzad
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
        char arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                flag = true;
                break;
            }
        }
        flag ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}