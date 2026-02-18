// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int H, L, W;
        cin >> H >> L >> W;
        int rectangle_area = 2 * (H * L + L * W + W * H);
        cout << (1000) / rectangle_area << endl;
    }
    return 0;
}