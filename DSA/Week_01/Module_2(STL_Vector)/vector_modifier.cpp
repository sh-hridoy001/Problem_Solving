// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> v;
    v = arr;

    //range based loops ,,, jodi index modify korte hoy thokhon eta hobe na
    for (int x : v)
    {
        cout << x<<" ";
    }
    return 0;
}