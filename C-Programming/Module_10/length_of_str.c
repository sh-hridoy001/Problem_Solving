#include <stdio.h>
#include<string.h>
int main()
{
    char name[101];
    scanf("%s", name);
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++ ;
    }
    printf("%d\n", count);

    //using build in function---
    int size = strlen(name);
    printf("%d", size);
    return 0;
}