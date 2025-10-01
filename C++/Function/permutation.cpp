// author: Sazzad
#include <bits/stdc++.h>
using namespace std;
int factor(int x){
    long long factorial = 1 ;
    for(int i=1; i<=x ; i++){
        factorial*=i ;
    }
    return factorial ;
}
int main()
{
    int n , r ; 
    cin>> n >> r ;
    long long permutation = factor(n)/ factor(n-r)  ;
    cout<< permutation ;
  return 0;
}