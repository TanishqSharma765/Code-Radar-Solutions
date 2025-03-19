#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Performing logical AND operation (both should be greater than zero)
    if (a > 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}

