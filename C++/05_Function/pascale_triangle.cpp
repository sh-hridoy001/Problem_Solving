// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int factor(int x){
    long long factorial = 1;
    for(int i=1; i<=x ; i++){
        factorial = factorial*i ;
    }
    return factorial ;
}

int nCr(int n, int r)
{
    return factor(n)/ (factor(r)* factor(n-r));
}
int main()
{
    int n ; cin>> n ;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<<nCr(i, j) <<" " ;
        }
        cout<<endl ;
    }

    return 0;
}