#include <sdtio.h>

int main(){
    int a , s;
    scanf("%d %d", &a, &s);

    int result = a << s;
    printf("%d", result);

    return 0;
}