#include <stdio.h>

int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral\n");  
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles\n"); 
        } 
        else {
            printf("Scalene\n");  
        }
    } 
    else {
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
