#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d" ,&a ,&b ,&c);
    if(a>b && b>c && a>c){
        printf("%d" ,a);
    }
    else if(a<b && b>c && c>a){
        printf("%d" ,b);
    }
    else{
        printf("%d" ,c);
    }
}