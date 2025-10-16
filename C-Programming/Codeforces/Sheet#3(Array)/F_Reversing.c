#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int j=n-1; j>=0; j--){
        printf("%d ",arr[j]);
    }
    return 0;
}

//accepted in codeforces*