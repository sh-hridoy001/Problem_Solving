#include <stdio.h>
#include <string.h>

int main()
{
    char str_1[11], str_2[11];
    scanf("%s", str_1);
    scanf("%s", str_2);

    int length_str_1 = strlen(str_1);
    int length_str_2 = strlen(str_2);

    for(int i = 0 ; i<=length_str_2 ; i++ ){
        str_1[i+length_str_1] = str_2[i] ;
    }
    
    printf("%d %d\n", length_str_1, length_str_2);
    printf("%s\n", str_1) ;

    char temp = str_1[0] ;
    str_1[0] = str_2[0] ;
    str_2[0] = temp;

    printf("%s %s", str_1, str_2) ;
    return 0;
}