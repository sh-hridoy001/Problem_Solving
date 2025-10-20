#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char name[n+1]; // +1 for null terminator
    scanf("%s", name); // read full string
    for(int i=0; i<n; i++){
        printf("%c\n", name[i]);
    }
    return 0;
}