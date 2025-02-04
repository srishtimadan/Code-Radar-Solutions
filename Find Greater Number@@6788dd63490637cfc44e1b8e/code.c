#include <stdio.h>

int main(){
    int a,b;
    printf("");
    scanf("%d");
    printf("");
    scanf("%d");
    if (a>b){
        printf("a is greater: %d");
    } else if (b>a){
        printf("b is greater: %d");
    } else {
        printf("none");
    }

    return 0;
}