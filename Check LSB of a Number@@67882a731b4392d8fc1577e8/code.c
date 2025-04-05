#include <stdio.h>

int main(){
    int a ;
    scanf("%d", &a);

    if (a & 1){
        printf ("Set\n", a);
    } else {
        printf ("Not\n", a);
    }

    return 0;
}