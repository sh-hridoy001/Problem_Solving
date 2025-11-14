#include<stdio.h>

void printArray(int arr[], int n, int i){
    if(i==(n-1)){
        return;
    }
    printf("%d ",arr[i]);
    printArray(arr, n, i+1);
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printArray(arr, n, 0);
    return 0;
}