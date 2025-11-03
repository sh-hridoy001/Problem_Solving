#include <stdio.h>

int add()
{
    int a, b;
    scanf("%d %d", &a, &b);
    return a + b;
}

int main()
{
    printf("%d", add());
    return 0;
}