// // author: Sazzad
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n ; cout<< "Enter N: " ; cin>> n ;
//     int f = 1 ;
//     for(int i =1 ; i<n ; i++){
//         if(n%i ==0) f= i ;
//     }
//     cout<< f ;
// }

// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ; cout<< "Enter N: " ; cin>> n ;

    int highest = 1 ;
    for(int i = 1 ; i<= n/2 ; i++){
        if(n%i == 0){
            cout<< i <<" " ; 
            highest = i ;
        }
    }
    cout<< highest ;

  return 0;
}