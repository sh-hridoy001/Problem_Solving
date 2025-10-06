#include <stdio.h>
int main()
{
    int a; printf("Enter a number: "); scanf("%d",&a) ;
    if(a%2==0)
    {
        printf("This is an Even number.\n") ;
    }else{
        printf("It is a Odd number.\n") ;
    }

    return 0;
}