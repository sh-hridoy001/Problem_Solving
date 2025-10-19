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
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    if (odd < even)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    return 0;
}