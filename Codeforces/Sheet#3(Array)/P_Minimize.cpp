#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int c = 0;
        while (arr[i] % 2 == 0 && arr[i] > 0) // even && >0
        {
            c++;
            arr[i] /= 2;
        }
        m = min(m, c);
    }
    cout << m;

    return 0;
}