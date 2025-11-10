#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    getchar(); // consume the newline after the integer input
    int freq[26] = {0};
    char c;

    for (int i = 0; i < N; i++)
    {
        scanf("%c", &c);
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            putchar('a' + i);
        }
    }

    return 0;
}