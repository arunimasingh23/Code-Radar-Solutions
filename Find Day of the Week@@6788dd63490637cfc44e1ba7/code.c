#include <stdio.h>
int main(){
    int a;
    scanf("%d" ,&a);
    if(a==1){
        printf("Monday");
    }
    if(a==2){
        printf("Tuesday");
    }
    if(a==3){
        printf("Wednesday");
    }
    if(a==4){
        printf("Thrusday");
    }
    if(a==5){
        printf("Friday");
    }
    if(a==6){
        printf("Saturday");
    }
    if(a==7){
        printf("Sunday");
    }
    if(a>7){
        printf("Invalid");
    }
    if(a==0){
        printf("Invalid");
    }
}