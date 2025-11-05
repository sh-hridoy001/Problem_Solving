#include <stdio.h>

int main()
{
    int x = 10;
    printf("%d\n", x);
    printf("%p\n", &x);

    int *ptr = &x;
    printf("%p\n", ptr); // x variable er address -----------
    printf("%p\n", &ptr); /// pointer variable er address-------
    printf("%d\n", *ptr); // pointer a j address ache oi address er value ------------

    // x er value change korbo pointer diye-----
    *ptr = 200;
    printf("%d", x);
    return 0;
}