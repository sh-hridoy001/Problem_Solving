#include<stdio.h>
#include<string.h>

int main()
{
    char ch, str1[101], str2[101] ;
    scanf("%c %s", &ch, str1);
    getchar();
    fgets(str2, 101, stdin) ;
    printf("%c\n%s\n%s\n", ch, str1, str2) ;
    
    return 0;
}