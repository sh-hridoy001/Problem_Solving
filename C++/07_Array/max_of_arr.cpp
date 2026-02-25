// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 6, 8, 4, 9, 7, 10};
    int n = sizeof(arr) / 4;
    int mx = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout << mx;
    
    return 0;
}