// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 12;
    int *y = &x;
    cout << x <<endl;
    *y = 20;
    cout << x;
    return 0;
}