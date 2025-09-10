#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  
    int *ptr = arr; 

    printf("Original array using pointer\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        *(ptr + i) += 5;  
    }

    printf("Modified array using pointer\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    printf("Modified array using array name\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
