// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n ;
  cout<<"Enter the marks : " ;
  cin>> n ;
  if (n>100)
  {
    cout<< "Dont be over smart." ;
  }
  else if (n>81)
  {
    cout<< "Excellent Mark. Good Job!" ;
  }
  else if (n > 60)
  {
    cout<< "Good mark . Try to get more number.";
  }
  else if (n > 40)
  {
    cout<< "Read more ! You have to increase the number." ;
  }
  else
  {
    cout<< "You are fail . Read more and  more." ;
  }
  
  return 0;
}

