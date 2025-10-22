#include <stdio.h>
#include <string.h>
int main()
{
    char x[21];
    char y[21];
    scanf("%s %s", x, y);
    int size1 = strlen(x);
    int size2 = strlen(y);
    if (size1 < size2)
    {
        printf("%s", x);
    }
    else
    {
        printf("%s", y);
    }

    return 0;
}
// didnt accepted* 