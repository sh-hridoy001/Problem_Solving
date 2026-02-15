// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    auto itarator = find(v.begin(), v.end(), 4);
    if (itarator == v.end())
    {
        cout << "NOT Found";
    }
    else
    {
        cout << "Found";
    }
    return 0;
}