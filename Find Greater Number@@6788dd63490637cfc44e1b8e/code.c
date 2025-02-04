#include <stdio.h>

int main(){
    int a,b;
    
    if (a>b){
        printf("a is greater: %d");
    } else if (b>a){
        printf("b is greater: %d");
    } else {
        printf("none");
    }

    return 0;
}