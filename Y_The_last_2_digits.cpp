// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    a %= 100;
    b %= 100;
    c %= 100;
    d %= 100;

    long long result = (((a * b) % 100 * c) % 100 * d) % 100;

    cout << result << endl;
    return 0;
}
