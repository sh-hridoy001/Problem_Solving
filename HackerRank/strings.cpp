// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, h;
    // getline(cin, s);
    cin >> s >> h;

    int len_s = s.length();
    int len_h = h.length();
    string c = s + h;
    char temp = s[0];
    s[0] = h[0];
    h[0] = temp;
    cout << len_s << " " << len_h << endl;
    cout << c << endl;
    cout << s << " " << h;
    return 0;
}