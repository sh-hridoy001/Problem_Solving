    // Author:- SH_Hridoy
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int tc;
        cin >> tc;
        while (tc--)
        {
            int r, n, rev = 0;
            cin >> n;
            for (int j = n; j > 0; j /= 10)
            {
                r = j % 10;
                rev = rev * 10 + r;
                ;
            }
            cout << rev << endl;
        }
        return 0;
    }