#include <stdio.h>
int main() {
    int age;
    char name[50],hobby[50];
    scanf("%s %s %d",name,&age,hobby);
    printf("Name: %s",name);
    printf("Age: %d",age);
    printf("Hobby: %s" , hobby);
    return 0;
}