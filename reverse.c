#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    while (num !=0 )
    {
        int last_num = num%10 ;
        printf("%d ", last_num);
        num = num/10 ;

    }
    
    return 0;
}