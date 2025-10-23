#include<stdio.h>
#include<string.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    // frequency array declare-----
    int fre[100001] = {0};
    for(int i=0; i<n; i++){
        int value = arr[i] ;
        fre[value]++ ;
    }

    for(int i=1; i<=m; i++){
        printf("%d\n", fre[i]);
    }
    return 0;
}