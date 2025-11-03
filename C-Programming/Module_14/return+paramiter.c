#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    printf("%d\n", sub(5, 6));
    printf("%d", add(5, 6));

    return 0;
}