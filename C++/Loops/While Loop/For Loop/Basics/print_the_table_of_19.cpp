// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{ // this loops runs 190 time,,,, this is memory lose .
    for(int i = 19 ; i<= 190 ; i++){
        if(i%19 ==0){
            cout<< i <<" ";
        }
    }
  return 0;
}


/// 2nd option   -------- this loops run only 10 times

// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    for(int i = 19 ; i<=190 ; i +=19){
        cout<< i <<endl;
    }
  return 0;
}