// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<<"Enter N: " ; cin>> n ;
    bool flag = true ;
    for(int i = 2 ; i<=n/2 ; i++){
        if(n%2==0){
            flag = false ;
            break ;
        }
    }
    if(flag == true){
        cout<< "Prime Number";
    }else{
        cout<<"Composite Number";
    }
  return 0;
}