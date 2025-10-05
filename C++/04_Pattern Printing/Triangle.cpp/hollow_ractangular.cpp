 // author: Sazzad
 #include <bits/stdc++.h>
 using namespace std;
 
 int main()
 {
    int n; cout<<"Enter N: " ; cin>> n;
    int m; cout<<"Enter M: " ; cin>> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || j==1 || i==n || j==m){
                cout<< "* " ;
            }else{
                cout<< "  " ;
            }
        }
        cout<<endl ;
    }
   return 0;
 }