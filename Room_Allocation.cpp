// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int total_room = 0;
        for (int j = 0; j < n; j++)
        {
            int room = ceil((double)arr[j] / 2);
            total_room += room;
        }
        cout << total_room << endl;
    }
    return 0;
}