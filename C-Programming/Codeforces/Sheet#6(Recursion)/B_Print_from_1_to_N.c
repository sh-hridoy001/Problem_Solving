#include <stdio.h>

void printN(int i, int n)
{
    if (i == n+1)
    {
        return;
    }
    printf("%d\n", i);
    printN(i+1, n);
}
int main()
{
    int i = 1, n;
    scanf("%d", &n);
    printN(i, n);
    return 0;
}