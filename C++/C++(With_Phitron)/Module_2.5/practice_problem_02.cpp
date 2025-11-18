// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    int arr_b[m];
    for (int j = 0; j < n; j++)
    {
        arr_b[j] = arr[j];
    }
    for (int i = n; i < m; i++)
    {
        cin >> arr_b[i];
    }
    delete[] arr;

    for (int k = 0; k < m; k++)
    {
        cout << arr_b[k] << " ";
    }

    return 0;
}