#include <stdio.h>

int main()
{
    int n;
    printf("Enter range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Looping...%d\n",i);
    }
    return 0;
}