#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y ;
    scanf("%d %d", &x, &y);
    printf("%d", add(x,y));
}