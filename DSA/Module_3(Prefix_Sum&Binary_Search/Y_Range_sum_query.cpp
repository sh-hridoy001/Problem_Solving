// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ques;
    cin >> n >> ques;
    vector<int> v(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    while (ques--)
    {
        int a, b;
        cin >> a >> b;
        int sum = 0;
        for (int i = a ; i <= b; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }

    return 0;
}