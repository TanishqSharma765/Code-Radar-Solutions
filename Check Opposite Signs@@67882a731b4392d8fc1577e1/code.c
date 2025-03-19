#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Checking if numbers have opposite signs
    if ((a ^ b) < 0) {
        printf("True\n");  // True if signs are opposite
    } else {
        printf("False\n"); // False if both are positive or both are negative
    }

    return 0;
}
