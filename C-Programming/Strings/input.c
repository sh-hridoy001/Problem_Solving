#include<stdio.h>
int main(){

    // for only the first word --- we use scanf,, if we need multiple word and spaces we should use fgets() ---
    char name[40];
    scanf("%s", name); /// & sign dewa lagbe na ekhaneeee---
    printf("Your input is:  %s", name) ;
    return 0;
}