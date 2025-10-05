
// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n = 100 ;
    for(int i = 1 ; i <=n ; i++){
        if( i%2 == 0){
            cout<< i << " ";
        }
    }
  return 0;
}


// 2nd Method to find out the all EVEN number from 1 to 100 -----------------

// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i = 2 ; i<= 100 ; i= i+ 2){
        cout<< i << " ";
    }
  return 0;
}