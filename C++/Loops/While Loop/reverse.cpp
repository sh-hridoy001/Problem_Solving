// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter N: " ; cin>> n ;
    int rev= 0 ;
    int number = 0 ;
    while(n!=0){
        int ld = n%10 ;
        number = number + ld ;
        rev = rev*10 ;
        rev = rev + ld ;
        n = n/10 ;
    }
    cout<< rev <<endl ;
    cout<< number + rev ;
  return 0;
}


// cant finding the sum of n and reverse number.