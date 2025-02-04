#include <stdio.h>

int main(){
    int year;
    printf("");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0) || year%4==0){
        printf("Leap Year");
    }
    else {
        printf("Not a Leap year");
    }

    return 0;
}