#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers (0 or 1)
    scanf("%d %d", &a, &b);

    // Performing logical AND operation
    if (a && b) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
