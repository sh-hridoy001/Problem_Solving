#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0;

        for (int i = 0; i < 5; ++i)
        {
            int temp;
            cin >> temp;

            if (temp == 1)
                count++;
        }

        if (count >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}