// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v;    //type - 1
    // vector<int> v(5);    // type - 2
    // vector<int> v(5, 1); // type - 3
    // int len = v.size();

    int arr[5] = {1, 2, 2, 3, 4};
    vector<int> v(arr, arr+5);
    // vector output : -
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}