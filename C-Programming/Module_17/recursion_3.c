#include <stdio.h>

void printN(int n)
{
    if (n == 6)
    {
        return;
    }
    printf("%d\n", n);
    printN(n + 1);
}

int main()
{
    // print 1 to N: --------
    int i = 1;
    printN(i);
    return 0;
}