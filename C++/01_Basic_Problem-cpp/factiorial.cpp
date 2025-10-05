// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n ;
    long long factor =1 ;
    for(int i=1; i<=n ; i++){
        factor = factor*i ;
    }
    cout<<factor ; 
    return 0;
}