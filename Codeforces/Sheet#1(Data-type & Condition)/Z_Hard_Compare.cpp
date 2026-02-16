// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a>> b >>c >> d;
    long double left = b * log((long double)a);
    long double right = d * log((long double)c);
    if(left>right){
        cout<<"YES\n" ;
    }else{
        cout<<"NO\n" ;
    }
    return 0;
}