#include <stdio.h>
#include <string.h>

int main()
{
    char str[10000001]; // [10000000] dile vs code a error dey, eta 0 kom dichi.. 
    scanf("%s", str);

    int fre[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        fre[str[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }
    return 0;
}