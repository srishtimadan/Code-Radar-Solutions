#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%a %b %c", &a, &b, &c);
    if (a = b = c){
        printf("Euilateral");
    }
    else if(a=b, b=a, c!=a){
        printf("Isosceles");
    }
    else {
        printf("Scalene")
    }
    return 0;
}