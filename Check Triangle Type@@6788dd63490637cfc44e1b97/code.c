#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c){
        printf("Euilateral\n");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }
    return 0;
}