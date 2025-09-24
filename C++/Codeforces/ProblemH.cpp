#include <iostream>
#include <cmath>
using namespace std;
int main() {

  int a , b ;
  cin>> a >> b ;
  double X = (double)a/b ;
  cout<< " floor " <<a <<" / " <<b <<" = " <<floor(X) <<endl ;
  cout<< " ceil " <<a <<" / " <<b <<" = " <<ceil(X) <<endl ;
  cout<< " round " <<a << " / " <<b << " = " <<round(X) <<endl ;
  return 0 ;

}