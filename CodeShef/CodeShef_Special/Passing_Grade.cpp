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
        int pass = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pass = arr[0];
            if (arr[i] >= pass)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}