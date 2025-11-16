#include <stdio.h>

void printN(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n);
    if (n > 1)
    {
        printf(" ");
    }

    printN(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printN(n);
}