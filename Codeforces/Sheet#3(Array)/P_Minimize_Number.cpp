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
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        while (arr[i] % 2 == 0 && arr[i] > 0)
        {
            count++;
            arr[i] /= 2;
        }
        mini = min(count, mini);
    }
    cout << mini;
    return 0;
}

//Accepted in codeforces*