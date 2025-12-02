// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool found = false;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            found = true;
            break;
        }
    }
    if (found == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}