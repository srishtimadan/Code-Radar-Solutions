#include <stdio.h>
int main(){
    int num;

    printf("");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}