// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n); // vector initialization -- --
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << " ";
    // }

    // func - 1 : v.push_back() - Add an element to the end.
    v.push_back(6);           // assign to the last
    cout << v.back() << endl; // access the last element

    // func - 2 : v.pop_back() - Remove the last element.
    v.pop_back();             // remove the last element --
    cout << v.back() << endl; // access the last element

    // func - 3 : v.insert() - Insert elements at a specific position.
    v.insert(v.begin(), 8);
    cout << v.front() << endl;

    // func - 4 : v.erase() - Erase element from a specific position.
    v.erase(v.begin() + 2, v.begin() + 5);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // func - 5 : replace(v.begin(),v.end(),value,replace_value) - Replace all the value with replace_value. Not under a vector.
    vector<int> v2 = {1, 2, 6, 5, 6};
    replace(v2.begin(), v2.end() - 1, 2, 10);  // jekhane jekhane 2 ache oikhane 10 hoye jabe
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }
    return 0;
}