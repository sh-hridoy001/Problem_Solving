// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        bool isPalindrome = true;
        int len = s.size();
        int i = 0, j = len - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                isPalindrome = false;
            }
            i++;
            j--;
        }
        if (isPalindrome == true)
        {
            cout << "wins\n";
        }
        else
        {
            cout << "loses\n";
        }
    }
    return 0;
}