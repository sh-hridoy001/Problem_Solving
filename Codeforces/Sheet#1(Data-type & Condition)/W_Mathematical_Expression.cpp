// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, correct;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        correct = a + b;
        if (correct == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << correct << endl;
        }
    }
    else if (s == '-')
    {
        correct = a - b;
        if (correct == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << correct << endl;
        }
    }
    else if (s == '*')
    {
        correct = a * b;
        if (correct == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << correct << endl;
        }
    }
    return 0;
}