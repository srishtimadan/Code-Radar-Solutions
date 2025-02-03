#include <stdio.h>
int main(){

    float num1 , num2 , prod;

    scanf("%f %f" , &num1 , &num2);

    prod = num1*num2;

    printf("Product: %.2f" , prod);

    return 0;
}