#include<stdio.h>

int main()
{
    char name[6];
    for(int i=0; i<6; i++){
        scanf("%c", &name[i]);
    }
    for(int i=0; i<6;i++){
        printf("%c\n", name[i]);
    }

    return 0;
}