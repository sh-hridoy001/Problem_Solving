// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cout<< "Enter the digit : ";
  cin>> n ;
  if (n > 99 && n < 1000)
  {
    cout<< "This is three digit number." ;
  }
  else
  {
    cout<< "This in not three digit number ." ;
  }
  return 0;
}