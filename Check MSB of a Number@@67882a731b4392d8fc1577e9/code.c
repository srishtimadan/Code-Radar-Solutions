#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if (num & 0x80000000){
        printf("Set\n");
    } else {
        printf("Not Set\n");
    }

    return 0;
}