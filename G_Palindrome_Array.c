#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int reversed_arr;
    for(int j=n-1; j>=0; j--){
        reversed_arr = arr[j];
    }

    return 0;
}

