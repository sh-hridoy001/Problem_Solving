// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  double a, b, c ,s , area ;

  cout<< "Enter the firts value : " ;
  cin>> a ;
  cout<< "Enter the second value : " ;
  cin>> b ;
  cout<< "Enter the third value : " ;
  cin>> c ; 
  if ((a + b)> c && (b + c)>a && (a + c)> b )
  {
    s = (a + b + c)/2 ;
    area = sqrt(s * (s - a) * (s - b) * (s - c)) ;
    cout<< "The triangle area is : " << area <<endl ;
  }
  else
  {
    cout<< "Triangle is not possible ." <<endl ;
  }
  return 0;
}