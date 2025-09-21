// author: Sazzad

// task : print : 3, 12, 48,,,,,,,,,,,,,,
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter N: "; cin>> n ;
    int a = 3 ;
    for(int i =1 ; i<= n ; i++){
        cout<< a << ", " ;
        a *=4 ;
    }
  return 0;
}