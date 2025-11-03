#include <stdio.h>
void even_odd()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        even_odd();
    }
    return 0;
}