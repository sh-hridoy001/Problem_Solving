#include<stdio.h>

int main(){

    int n; 
    scanf("%d",&n);
    for(int i=n-1; i>=0; i--){// reverse the same values-----
    // for(int i=0; i<n; i++){ // prine n-1 values---
        printf("%d ",i);
    }
    return 0 ;
}