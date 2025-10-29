#include <stdio.h>

int n_times(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if(i>1){
            printf(" ");
        }
        printf("%d", i);
    }
}

int main()
{
    int x;
    scanf("%d", &x);
    n_times(x) ;
    return 0;
}