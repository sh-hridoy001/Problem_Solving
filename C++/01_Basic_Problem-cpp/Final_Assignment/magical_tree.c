#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int row_size = (n + 1) / 2 + 5;
    int star = 1;

    // first 
    for (int i = 1; i <= row_size; i++)
    {
        for (int k = 1; k < row_size - i + 1; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }

    // second pattern ----
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
//accepted*