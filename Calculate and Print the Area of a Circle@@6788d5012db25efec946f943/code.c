#include <stdio.h>
#include <math.h>

int main() {
    double r, area;

    if (scanf("%lf", &r) != 1 || r <= 0) {  
        printf("Invalid input\n");  
        return 1;  
    }

    area = M_PI * r * r;
    printf("Area: %.6lf\n", area); 

    return 0;
}
