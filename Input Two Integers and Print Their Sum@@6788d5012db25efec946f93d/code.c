#include <stdio.h>

int main(){
    int a , b , sum;
    
    printf("enter the value of a:  ");
    scnaf("%d",&a);

    printf("enter the value of b:  ");
    scanf("%d",&b);

    sum = a + b;

    printf("sum: " , a ,b , sum);

    return 0;
}