// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter a number : " ; cin>> n ;
    int count = 0 ;
    while(n!=0){
        n = n/10 ;
        count ++ ;
    }
    cout<< count ;
  return 0;
}