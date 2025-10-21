#include <stdio.h>
#include<string.h>

int main()
{
    char n1[101], n2[101];
    scanf("%s %s", n1, n2);
    int size1 = strlen(n1);
    int size2 = strlen(n2);
    printf("%d %d\n",size1, size2);
    printf("%s %s",n1, n2);
    return 0;
}