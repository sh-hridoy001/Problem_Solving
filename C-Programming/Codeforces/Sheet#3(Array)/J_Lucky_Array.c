#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n] ;
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]) ;
    }

    int mini = INT_MAX ;
    for(int i=0; i<n; i++){
        if(arr[i]<mini){
            mini = arr[i] ;
        }
    }
    int mini_count = 0 ;
    for(int i=0; i<n; i++){
        if(arr[i] == mini){
            mini_count++ ;
        }
    }

    if(mini_count%2!=0){
        printf("Lucky") ;
    }else{
        printf("Unlucky");
    }
    return 0;
}

//accepted in codeforces*