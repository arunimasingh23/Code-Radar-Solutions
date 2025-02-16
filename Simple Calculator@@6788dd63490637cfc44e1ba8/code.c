#include <stdio.h>

int main() {
    int a, b;
    char c; 
    scanf("%d %d %c", &a, &b, &c);
    if (c == '+') {
        printf("%d\n", a + b);
    } 
    else if (c == '-') {
        printf("%d\n", a - b);
    } 
    else if (c == '*') {
        printf("%d\n", a * b);
    } 
    else if (c == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
        } else {
            printf("%d\n", a / b);
        }
    } 
    else {
        printf("Invalid operator\n");
    }

    return 0;
}
