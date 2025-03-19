#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Logical AND-OR combination
    if ((a <= 0) && (b > 0)) {
        printf("True\n");  // True if a is non-positive and b is positive
    } else {
        printf("False\n");
    }

    return 0;
}

