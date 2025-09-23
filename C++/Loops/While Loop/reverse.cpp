// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter N: " ; cin>> n ;
    int i = 1 ;
    int rev= 0 ;
    while(n!=0){
        int ld = n%10 ;
        rev = rev*10 ;
        rev = rev + ld ;
        n = n/10 ;
    }
    cout<< rev ;
  return 0;
}