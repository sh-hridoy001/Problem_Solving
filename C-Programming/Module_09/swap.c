#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    // before swapping --------
    printf("Before swapping: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}