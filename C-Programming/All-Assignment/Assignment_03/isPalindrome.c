#include <stdio.h>
#include <string.h>
int is_palindrome(char str[])
{
    int length = strlen(str);
    int isPalindrome = 1;
    int j = length - 1;
    for (int i = 0; i < length/2; i++)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
        j--;
    }
    return isPalindrome ;
    
}
int main()
{
    char str[1001];
    scanf("%s", str);
    int result= is_palindrome(str);
    if (result == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}

//accepted in codeforces* 