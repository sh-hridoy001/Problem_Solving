// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cout<< "Enter the marks : ";
  cin>> n ;
  if (n> 100 ){
    cout<< "Dont be over smart";
  }else if (n>= 80){
    cout<< "You got A+";
  }else{
    cout<< "You have to read more!";
  }
  return 0;
}