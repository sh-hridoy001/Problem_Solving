#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float x, y;
    scanf("%f %f", &x, &y);
    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f", x + y, x - y);
    return 0;
}