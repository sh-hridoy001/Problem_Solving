// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr_x= new int [n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr_x[i];
    }
    int m;
    cin >> m;
    int arr_y[m];
    // coping array ---- --- ---
    for (int j = 0; j < n; j++)
    {
        arr_y[j] = arr_x[j];
    }
    for (int i = n; i < m; i++)
    {
        cin >> arr_y[i];
    }
    for (int k = 0; k < m; k++)
    {
        cout << arr_y[k] << " ";
    }
    delete[] arr_x ;
    return 0;
}