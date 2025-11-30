// Author:- SH_Hridoy
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
    int value;
    cin >> value;
    int flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            flag == true;
            break;
        }
    }
    if (flag == true)
    {
        cout << "value not found";
    }
    else
    {
        cout << "Value is found";
    }
    return 0;
}