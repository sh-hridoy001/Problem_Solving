#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int total_row = n*2+4 ;
    int star = 1;
    for (int i = 1; i <= total_row; i++)
    {
        for(int k=1; k<total_row-i+1; k++){
            printf(" ");
        }
        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star += 2;

        printf("\n");
    }
    return 0;
}