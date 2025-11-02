#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int k = 1; k <= j; k++)
        {
            printf(" ");
        }
        for (int i = 1; i <= n - j + 1; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}