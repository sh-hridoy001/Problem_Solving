// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x;
    cin >> s >> x;
    string y = s + x;
    cout << s.size() << " " << x.size() << endl;
    cout << y << endl;
    int temp = s[0];
    s[0] = x[0];
    x[0] = temp;
    cout << s << " " << x;

    return 0;
}