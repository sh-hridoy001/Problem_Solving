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
        int arr[n];
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > mx)
            {
                mx = arr[i];
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count++;
            if (arr[i] == mx)
            {
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}