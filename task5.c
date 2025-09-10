#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *p = str;

    printf("String using pointer ");
    while (*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");

    p = str;
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }
    printf("Number of characters %d\n", count);

    return 0;
}
