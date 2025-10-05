#include<stdio.h>
int main(){
    // int num1 ; 
    // printf("Enter A Number : ") ;
    // scanf("%d", &num1);
    // printf("%d", num1) ;

    int num ;
    float f ;
    char c ;

    scanf("%d %f %c", &num, &f, &c);
    printf("%d %.2f %c", num, f, c) ;
    return 0 ;
}