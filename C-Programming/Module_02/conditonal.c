#include <stdio.h>

int main(){
    int tk ; printf("Enter your balance : ") ;
    scanf("%d", &tk);

    if(tk >=100){
        printf("Cholo coffee khai.. \n");
    }else if (tk >= 80){
        printf("Cholo special ca khai asi. \n");
    }else{
        printf("Tk egula joma koro ,, 80+ tk hoile tokhon kichu ekta khabo.. \n") ;
    }

}