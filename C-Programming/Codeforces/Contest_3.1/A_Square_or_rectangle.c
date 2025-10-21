#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int a, b;
    for(int i=0; i<n; i++){
        scanf("%d %d",&a, &b);
        if(a==b){
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
    }
    return 0;
}