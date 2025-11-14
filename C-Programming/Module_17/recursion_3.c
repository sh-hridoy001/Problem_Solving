#include <stdio.h>

void printN(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("I love Recursion\n");
    printN(n - 1);
}

int main()
{
    // print 1 to N: --------
    int n;
    scanf("%d", &n);
    printN(n);
    return 0;
}