// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, age, count = 0;
        cin >> n >> age;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] >= age)
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}