// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<<"Enter N: " ; cin>> n ;
    bool flag = true ;
    for(int i = 2 ; i<=sqrt(n) ; i++){
        if(n%2==0){
            flag = false ;
            break ;
        }
    }
    if(n == 1){cout<<"Neither prime nor composite";}
    else if(flag == true){cout<< "Prime Number";}
    else{cout<<"Composite Number";}
  return 0;
}