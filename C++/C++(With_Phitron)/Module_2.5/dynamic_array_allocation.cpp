// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{
    int n;
    cin >> n;
    int *x = get_array(n);
    for (int j = 0; j < n; j++)
    {
        cout << x[j] << " ";
    }
    return 0;
}