// print the series GP:  1, 2, 4, 8, 16, ,,,,,,
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter N: "; cin>> n ;
    int a = 1 ;
    for(int i = 1 ; i<=n ; i++){
        cout<<a <<", " ;
        a = a*2 ;
    }

  return 0;
}