// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 2, 5, 2};
    for (int x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    replace(v.begin(), v.end()-1, 2, 100);

    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}