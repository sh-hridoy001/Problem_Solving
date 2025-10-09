#include <stdio.h>

int main()
{
    int integ;
    long long ln;
    double db;
    char ch;
    scanf("%d %lld %lf %c", &integ, &ln, &db, &ch);
    printf("%d\n%lld\n%.2lf\n%c\n", integ, ln, db, ch);

    return 0;
}