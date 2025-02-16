#include <stdio.h>
int main(){
    char c;
    scanf("%c" ,&c);
     if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    }
    else {
        printf("Not an alphabet\n");
    }
}