#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
        for (int j = (2 * star - 1); j >= 1; j--)
        {
            printf("* ");
        }
        star--;
        printf("\n");
    }
    return 0;
}