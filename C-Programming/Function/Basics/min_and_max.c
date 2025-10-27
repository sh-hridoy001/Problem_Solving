#include <stdio.h>

int mini(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Minimum value is: %d", mini(a, b));
    return 0;
}