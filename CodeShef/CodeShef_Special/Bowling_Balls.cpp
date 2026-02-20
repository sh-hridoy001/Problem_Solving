// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Tc;
    cin >> Tc;

    while (Tc--)
    {
        int N, X, Y;
        cin >> N >> X >> Y;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int count = 0;
        for (int i = 0; i < N; ++i)
        {
            if (A[i] >= X && A[i] <= Y)
            {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}