#include <stdio.h>

int main() {
    int x = 42;
    int *ptr = &x;
    int **pptr = &ptr;

    printf("Value using pointer %d\n", *ptr);
    printf("Value using double pointer %d\n", **pptr);

    return 0;
}
