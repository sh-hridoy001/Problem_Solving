#include <stdio.h>
#include <string.h>
int main()
{
    char number[1000001];
    scanf("%s", &number);
    int length = strlen(number) ;
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + number[i]-48; // '0' dileo hobe--------
    }
    printf("%d", sum);
    return 0;
}