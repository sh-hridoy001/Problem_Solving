// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b ,c , d  ;
    double power_one, power_two ;
    cin>> a >>b >>c >>d ;
    power_one = b*log(a) ;
    power_two = d*log(c) ;

    if(power_one>power_two){
        cout<<"YES \n" ;
    }else{
        cout<<"NO \n" ;
    }

  return 0;
}