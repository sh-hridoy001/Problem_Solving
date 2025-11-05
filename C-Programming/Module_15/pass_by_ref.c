#include <stdio.h>
int func(int *p)
{
    *p = 20;
}

int main()
{
    int x = 10;
    printf("%d\n", x);
    func(&x);
    printf("%d", x);
    return 0;
}