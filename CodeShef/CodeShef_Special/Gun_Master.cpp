// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, short_gun;
        cin >> n >> short_gun;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int switchh = 0;
        char gun = 'c';
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > short_gun && gun=='c')
            {
                gun = 'l';
                switchh++;
            }
            else if (arr[i] <= short_gun && gun=='l')
            {
                gun = 'c';
                switchh++;
            }
        }
        cout << switchh << endl;
    }

    return 0;
}