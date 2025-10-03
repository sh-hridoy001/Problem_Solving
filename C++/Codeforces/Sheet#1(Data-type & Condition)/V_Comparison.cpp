// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a ; cin>> a ;
    char n ; cin>> n ;
    int b ; cin>> b ;

    if(a>b && n=='>'){
        cout<<"Right" ;
    }else if (a<b && n=='<')
    {
        cout<<"Right" ;
    }else if(a==b && n=='='){
        cout<<"Right" ;
    }else{
        cout<<"Wrong" ;
    }
    
  return 0;
}