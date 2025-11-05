#include <stdio.h>

int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr = &x;
    printf("%p\n", ptr); // x variable er address -----------
    printf("%p", &ptr); /// pointer variable er address-------
    return 0;
}