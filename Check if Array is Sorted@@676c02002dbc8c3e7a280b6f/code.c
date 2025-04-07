#include<stdio.h>
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    int isSorted = 1; 
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = 0; 
            break;
        }
    }

    if (isSorted)
        printf("Sorted\n");
    else
        printf("Not Sorted\n");

    return 0;
}