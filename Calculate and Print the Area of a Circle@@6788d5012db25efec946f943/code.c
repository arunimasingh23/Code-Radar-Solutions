#include <stdio.h>
#include <math.h>

int main() {
    double r, area;
    scanf("%lf", &r);
    area = M_PI * r * r;
    printf("Area: %.2lf", round(area * 100) / 100); // Rounds correctly
    return 0;
}
