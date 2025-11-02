#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}