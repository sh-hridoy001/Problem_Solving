// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};
    v.push_back(6);

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    v.pop_back();
    for (int x : v)
    {
        cout << x << " ";
    }

    // insert value int the exact position :
    v.insert(v.begin() + 2, 10); // ekhane direct position lekha jay na
    cout << endl;
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // onno ekta vector er value j kono jagay theke insert
    vector<int> v2 = {9, 10, 5, 7};
    v.insert(v.begin() + 2, v2.begin(), v2.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}