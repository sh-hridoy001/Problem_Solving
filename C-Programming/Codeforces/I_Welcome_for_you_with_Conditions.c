#include<stdio.h>

int main()
{
    int a, b;
    scanf("%d %d",&a, &b);

    if(a>b || a==b){
        printf("Yes\n");

    }else{
        printf("No");
    }
    return 0;
}