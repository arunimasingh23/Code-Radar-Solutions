#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int num = a ^ (1 << b);
    printf("%d\n", num);
    return 0;
}
