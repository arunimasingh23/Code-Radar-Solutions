#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num){
    if(num==0 || num==1){
        return 0;
    }
    for(int i=2; i<=num; i++){
        if (num%i==0){
            return 0;
        }

    }
    return 1;
}