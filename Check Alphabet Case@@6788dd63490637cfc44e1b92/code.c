#include <stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if ((ch>='A') && (ch>='Z')){
        print("Uppercase");
    }
    else if((ch>='a') &7 (ch>='z')){
        printf("Lowercase");
    }
    else {
        printf("Not an Alphabet")
    }

    return 0;
}