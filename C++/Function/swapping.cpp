// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, temp;
    cin >> x >> y;
    cout << x << " " << y <<endl;
    temp = x;
    x = y;
    y = temp ;
    cout << x << " " << y;
    return 0;
}