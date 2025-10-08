#include <stdio.h>

int main()
{
    // int n; scanf("%d", &n);
    // for(int i=0; i<=n; i+=2){
    //     printf("  %d",i) ;
    // }

    int num; scanf("%d",&num);
    for(int i=1; i<=num; i++){
        if(i%2==0){
            printf(" %d",i) ;
        }
    }
    return 0;
}