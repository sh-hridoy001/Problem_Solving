#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);
    int arr[n];

    //user theke array value input---
    for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
    }
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}