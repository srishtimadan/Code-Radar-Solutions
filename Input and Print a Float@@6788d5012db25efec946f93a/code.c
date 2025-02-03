#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num;

    printf("enter the floating-point number: ");
    scanf("%f",&num);

    printf("You entered: %.2f\n", num);

    retunr 0;
}