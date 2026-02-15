// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        stack<char> st;
        for (int i = 0; i < str.size(); i++)
        {
            if (st.empty())
            {
                st.push(str[i]);
            }
            else if ((st.top() == '0' && str[i] == '1') || (st.top() == '1' && str[i] == '0'))
            {
                st.pop();
            }
            else
            {
                st.push(str[i]);
            }
        }
        if (st.empty())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
