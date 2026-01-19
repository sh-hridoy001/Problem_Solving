// Author:- SH_Hridoy
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (10 * x >= y)
        {
            std::cout << y * z << std::endl;
        }
        else
        {
            std::cout << 10 * x * z << std::endl;
        }
    }

    return 0;
}