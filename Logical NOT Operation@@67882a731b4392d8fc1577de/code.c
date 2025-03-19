#include <stdio.h>

int main() {
    int a;

    // Taking input for an integer
    scanf("%d", &a);

    // Checking if the number is negative or zero
    if (a <= 0) {
        printf("True\n");  // Print True for negative numbers and 0
    } else {
        printf("False\n"); // Print False for positive numbers
    }

    return 0;
}



