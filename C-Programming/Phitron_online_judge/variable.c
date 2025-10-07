#include <stdio.h>

int main()
{
    int a;
    long long l;
    float fl;
    char c;
    scanf("%d %ld %f %c", &a, &l, &fl, &c);
    printf("%d\n%ld\n%.2f\n%c\n", a, l, fl, c);
    return 0;
}