#include <stdio.h>
int main(){
    char c;
    scanf("%c" ,&c);
    if(c=='A'){
        printf("Excellent");
    }
    if(c=='B'){
        printf("Good");
    }
    if(c=='C'){
        printf("Average");
    }
    if(c=='D'){
        printf("Below Average");
    }
    if(c=='F'){
        printf("Fail");
    }
    if(c=='E'){
        printf("Invalid grade");
    }
}