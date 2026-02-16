// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int found = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            found++;
        }
    }
    if (found > 0)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}