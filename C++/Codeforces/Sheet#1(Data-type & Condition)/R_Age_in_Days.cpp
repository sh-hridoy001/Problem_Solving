    // author: Sazzad
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n ; cin>> n;
        int year = n/365 ;
        n = n%365 ;
        int month = n/30 ;
        int day = n%30 ;

        cout<<year <<" years" <<endl ;
        cout<<month <<" months" <<endl ;
        cout<<day <<" days" <<endl ;
        
    return 0;
    }