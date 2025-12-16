// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    // vector output -- -- -- 
    // for (int i = 0; i < n; i++)
    // {
    //     cout<< v[i]<<" ";
    // }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}