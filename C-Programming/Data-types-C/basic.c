#include <stdio.h>

int main() {
    int a = 10;
    char b = 'A';
    float c = 3.14;
    double d = 12.3456;

    printf("Integer: %d\n", a);
    printf("Character: %c\n", b);
    printf("Float: %.2f\n", c);
    printf("Double: %.4lf\n", d);
    printf("Integer: %d\n", a);

    return 0;
}