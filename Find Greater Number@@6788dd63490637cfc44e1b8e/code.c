#include <stdio.h>

int main(){
    int a,b;
    printf("");
    scanf("%d",&a);
    printf("");
    scanf("%d",&b);
    if (a>b){
        printf("a is greater: %d");
    } else if (b>a){
        printf("a is greater: %d");
    } else {
        printf("none");
    }

    return 0;
}