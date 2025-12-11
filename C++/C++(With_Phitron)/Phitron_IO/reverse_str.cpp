// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.size();
    for (int i = len - 1; i >= 1; i--)
    {
        cout << str[i];
    }
    str[0] = str[0] +32;
    cout << str[0];
    return 0;
}