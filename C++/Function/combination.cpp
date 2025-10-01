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

int main()
{
    int n, r ; cin>> n >> r ;
    long long a, b, c ;
    a = factor(n) ;
    b = factor(r) ;
    c = factor(n-r) ;

    cout<<a/(b*c) ;
    

  return 0;
}