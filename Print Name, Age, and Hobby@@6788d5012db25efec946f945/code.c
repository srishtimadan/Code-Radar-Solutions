#include <stdio.h>

int main(){
    char name[50];
    int age;
    char hobby[100];

    scanf("%s %d", &name, &age);
    scanf("%[^\n]%*c", hobby);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s\n", hobby);

    return 0;
}