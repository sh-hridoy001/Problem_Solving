#include <stdio.h>
#include <string.h>
int main()
{
    char name[1001];
    scanf("%s", name);
    int size = strlen(name);

    int isPalindrome = 1;
    for (int i = 0; i < size / 2; i++)
    {
        if (name[i] != name[size - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}