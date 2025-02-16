#include <stdio.h>
int main() {
    int num, i, isPrime = 1; 
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 2) {
        printf("%d is not a prime number.\n", num);
        return 0; 
    }
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            isPrime = 0; 
            break; 
        }
    }
    if (isPrime)
        printf("Prime \n");
    else
        printf("Not Prime\n");

    return 0;
}
