// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    int flag = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] >= 10)
        {
            flag++;
        }
    }
    cout << flag;
    return 0;
}