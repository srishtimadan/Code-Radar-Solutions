#include <stdio.h>

int main(){
    char grade;
    scanf("%d", &grade);

    if (grade == 'A'){
        printf("Excellent\n");
    }
    else if (grade == 'B'){
        printf("Good\n");
    }
    else if (grade == 'C'){
        printf("Average\n");
    }
    else if (grade == 'D'){
        printf("Below Average\n");
    }
    else if (grade == 'F'){
        printf("Fail\n");
    }
    else {
        printf("Invalid Grade\n");
    }
    return 0;
}