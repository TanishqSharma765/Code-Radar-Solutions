#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Checking if numbers have opposite signs (0 is considered non-negative)
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        printf("True\n");  // True if signs are opposite
    } else {
        printf("False\n"); // False otherwise
    }

    return 0;
}

