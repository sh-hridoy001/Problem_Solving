// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n ; 
    cin>> n ;

    double decimal_part = n- int(n) ;
    int integer_part = int(n) ;

    if(n==integer_part){
        cout<<"int " <<integer_part ;
    }else{
        cout<<"float " <<integer_part <<" " <<decimal_part ;
    }
    
  return 0;
}