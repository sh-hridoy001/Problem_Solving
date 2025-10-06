#include<stdio.h>
int main(){
    int a, b ;
    printf("Enter the value of A: ") ; scanf("%d", &a) ;
    printf("Enter the value of B: ") ; scanf("%d", &b) ;
    int sum = a+b ;
    int sub = a-b ;
    int mul = a*b ;
    float div = (float)a/b ;  // float number ---- int to float converted
    int mod = a%b ;

    printf("Addition = %d\n", sum) ;
    printf("Subtraction = %d\n", sub) ;
    printf("Multipliaction = %d\n", mul) ;
    printf("Division = %.2f\n", div) ;
    printf("Modulus = %d\n", mod) ;
    return 0 ;
}