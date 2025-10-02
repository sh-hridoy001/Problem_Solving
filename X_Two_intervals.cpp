// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;
    int start_point = max(L1, L2) ;
    int end_point = min(R1, R2) ;
    if(start_point<=end_point){
        cout<<start_point <<" " <<end_point <<endl ;
    }else{
        cout<<"-1" ;
    }
    return 0;
}