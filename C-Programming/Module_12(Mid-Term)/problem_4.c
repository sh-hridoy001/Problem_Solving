#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];
    scanf("%s", str);

    int fre[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        fre[str[i] - 'a']++;   // ✅ convert 'a'..'z' → 0..25
    }

    for (int i = 0; i < 26; i++)   // ✅ only 0 to 25
    {
        if (fre[i] == 0)
        {
            continue;
        }
        else
        {
            printf("%c - %d\n", 'a' + i, fre[i]);  // ✅ convert index → letter
        }
    }
    return 0;
}