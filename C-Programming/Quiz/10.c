#include<stdio.h>
int main(){
    int x=5;
    int y=4;
    if(x>=y && x<y+4){
        if(y<5){
            printf("hi ");
        }else if(y<10){
            printf("hi ") ;
        }
    }else{
        printf("hello ");
    }
    return 0;
}