#include <stdio.h>
int main(){
    int a,b,c;
    printf("");
    scanf("%d",&a);
    printf("");
    scanf("%d",&b);
    printf("");
    scanf("%d",&c);

    if ((a>b) && (a>c)){
        printf("%d",a);
    }
    else if((b>c) && (b>a)){
        printf("%d",b);
    }
    else {
        printf("%d",c);
    }

    return 0;
}