#include <stdio.h>
#include <string.h>
#include<stdbool.h>

int main()
{
    char a[21], b[21];
    scanf("%s %s", a, b);
    int i = 0 ;
    while (true)
    
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (a[i] == '\0')
        {
            printf("%s", a);
            break;
        }
        else if (b[i] == '\0')
        {
            printf("%s", b);
            break;
        }
        else if (a[i] < b[i])
        {
            printf("%s", a);
            break;
        }
        else if (a[i] > b[i])
        {
            printf("%s", b);
            break;
        }
        else if (a[i] == b[i])
        {
            i++ ;
        }
    }
    return 0;
}

//accepted in codeforces* 