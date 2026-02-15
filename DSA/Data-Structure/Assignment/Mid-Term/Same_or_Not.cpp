// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO";
        return 0;
    }
    stack<int> st;
    queue<int> q;
    int val;

    while (n--)
    {
        cin >> val;
        st.push(val);
    }
    while (m--)
    {
        cin >> val;
        q.push(val);
    }

    while (!st.empty() && !q.empty())
    {
        if (st.top() == q.front())
        {
            st.pop();
            q.pop();
        }
        else
        {
            cout << "NO";
            break;
        }
    }

    if (st.empty() && q.empty())
    {
        cout << "YES";
    }

    return 0;
}

//accepted *