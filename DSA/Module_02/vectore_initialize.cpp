// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;    //type - 1
    // vector<int> v(5);    // type - 2
    vector<int> v(5, 1); // type - 3
    int len = v.size();
    // vector output : -
    for (int i = 0; i < len; i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}