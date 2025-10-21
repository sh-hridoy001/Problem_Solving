#include <stdio.h>
int main()
{
    char name[1000001];
    fgets(name,1000001,stdin);
    for(int i=0; name[i] != '\\'; i++){
        printf("%c", name[i]);
    }
    return 0;
}