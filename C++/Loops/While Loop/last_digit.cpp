// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<<"N : " ; cin>> n ;
    int i = 1 ;
    int last_digit = 0 ; 
    while(i<n){
        last_digit = n%10 ;
        i++ ;
    }
    cout<< last_digit ;

  return 0;
}