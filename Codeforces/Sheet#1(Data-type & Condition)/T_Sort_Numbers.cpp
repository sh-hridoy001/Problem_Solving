// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c ;
    cin>> a >>b >>c ;
    int min_num = min({a,b,c}) ;
    int max_num = max({a,b,c}) ;
    int middle_num = (a+b+c) - (min_num+max_num) ;

    cout<< min_num <<endl <<middle_num <<endl <<max_num <<endl ;
    cout<<endl ;
    cout<<a <<endl <<b <<endl <<c <<endl ; 
  return 0;
}