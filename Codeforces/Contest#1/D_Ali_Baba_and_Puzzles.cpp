#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    // (a op1 b) op2 c
    if (
        (a+b)+c == d || (a+b)-c == d || (a-b)+c == d || (a-b)-c == d || (a*b)+c == d || (a*b)-c == d ||
        // a op1 (b op2 c)
        a+(b+c) == d || a-(b+c) == d || a*(b+c) == d || 
        a+(b-c) == d || a-(b-c) == d || a*(b-c) == d || 
        a+(b*c) == d || a-(b*c) == d || a*(b*c) == d
      )
    {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
