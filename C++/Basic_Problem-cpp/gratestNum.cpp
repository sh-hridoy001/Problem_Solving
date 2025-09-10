// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a , b , c ;
  cout<< "Enter first value : " ;
  cin>> a ;
  cout<< "Enter second value : " ;
  cin>> b ;
  cout<< "Enter third value : " ;
  cin>> c ;

  if (a > b)
  {
    if (a > c)
    {
      cout<<a <<" is gratest" ;
    }
    else
    {
      cout<<c <<" is gratest" ;
    }
  }
  else 
  {
    if (b > c)
    {
      cout<<b <<" is gratest" ;
    }
    else
    {
      cout<<c <<" is gratest" ;
    }
  }
  return 0;
}