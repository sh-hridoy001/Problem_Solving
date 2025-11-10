#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if(i>=4 && i<=7){
            if(i==4){
                printf("4 ");
            }
            if(i==7){
                printf("7");
            }
            
        }else{
            printf("-1");
            break;
        }
    }
    return 0;
}