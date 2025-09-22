// print : 4, 8, 12, 16,,,,,,,,,,,,,,N 

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n ; cout<< "Enter N: " ; cin>> n ;

    // ----------USING FORMULA ------------
    // for(int i = 4 ; i<= 3*n-1 ; i+=3){
    //     cout<< i <<", ";
    // }

    // --------- WITHOUT FORMULA -----------
    int a = 4 ;
    for(int i = 1 ; i<=n ; i++){
        cout<< a << ", " ;
        a += 4 ;
    }
  return 0;
}