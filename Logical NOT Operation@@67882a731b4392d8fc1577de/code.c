#include <stdio.h>

int main() {
    int a;

    // Taking input for an integer
    scanf("%d", &a);

    // Checking if the number is negative
    if (a < 0) {
        printf("True\n");  // Print True for negative numbers
    } else {
        printf("False\n"); // Print False for 0 or positive numbers
    }

    return 0;
}


