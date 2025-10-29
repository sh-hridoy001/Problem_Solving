#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
    return;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    long long int add = sum(x, y);
    printf("%lld", add);
    return 0;
}