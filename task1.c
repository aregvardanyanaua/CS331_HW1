#include <stdio.h>

int main() {
    int num = 42;

    int* ptr = &num;

    printf("Address using &num %p\n", (void*)&num);
    printf("Address using pointer %p\n", (void*)ptr);

    *ptr = 99; 

    printf("New value %d\n", num);

    return 0;
}
