// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int cp, sp ;
  cout<< "Enter the value of cost : " ;
  cin>> cp ;
  cout<< "Enter the value of sell : " ;
  cin>> sp ;
  if ( sp > cp )
  {
    cout<< "He made Profite. " <<"and profite " <<(sp-cp) <<" tk" ;

  }
  else if (cp > sp)
  {
    cout<< "He made lose. " <<"and lose " <<(cp - sp) <<" tk" ;
  }
  else 
  {
    cout<< "No Profite No Lose." ;
  }
  return 0;
}