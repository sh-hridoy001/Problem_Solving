// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a;
    cin >> a;
    long long b;
    cin >> b;
    long long c;
    cin >> c;
    long long d;
    cin >> d;

    long long multiplication = a * b * c * d;
    int last_digit = multiplication % 100;
    cout << last_digit;
    return 0;
}