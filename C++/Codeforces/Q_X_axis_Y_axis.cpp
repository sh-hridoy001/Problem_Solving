// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float x ; cin>> x ;
    float y ; cin>> y ;

    if(x>=0 && y>=0){
        cout<<"Q1";

    }else if (x<0 && y>=0){
        cout<<"Q2" ;

    }else if (x<0 && y<0){
        cout<<"Q3" ;
    }else if (x>=0 && y<0){
        cout<<"Q4" ;
    }
    
  return 0;
}