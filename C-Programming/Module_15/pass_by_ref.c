#include <stdio.h>

int func(int *p){

    *p = 200;
}
int main()
{
    int x = 10;
    func(&x);
    printf("%d",x);
    return 0;
}