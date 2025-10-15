#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int max_value = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max_value){
            max_value = arr[i];
        }
    }
    printf("%d", max_value);
    return 0;
}