// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int value;
        cin >> value;
        if (value == 0)
        {
            cout << "1\n";
        }
        else
        {
            long long factorial = 1;
            for (int i = 1; i <= value; i++)
            {
                factorial = factorial * i;
            }
            cout << factorial << endl;
        }
    }
    return 0;
}

//accepted in codeforces*