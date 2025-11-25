#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int c = 0;
    int len = s.length();

    // checking - (highfen) ---
    if (s[a] != '-')
    {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < len; i++)
    {
        if (i == a)
            continue;
        if (!isdigit(s[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}