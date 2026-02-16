// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    // sort(s.begin(), s.end()); // for sorting string - -- ---
    // cout<<s ;

    set<char> st;
    for (char c : s)
    {
        st.insert(c);
    }
    for (char c : st)
    {
        cout << c;
    }
    return 0;
}