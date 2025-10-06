#include <stdio.h>

int main()
{
    int taka;
    printf("Enter your budget : ");
    scanf("%d", &taka);
    if (taka > 5000)
    {
        printf("Cox's bazar Jabo.\n");
        if (taka > 10000)
        {
            printf("Let's go to Sanmartine\n") ;
        }
    }else{
        printf("Taka joma koro. 5000+ taka hoile gurte jabo. Inshallah..") ;
    }
    return 0;
}