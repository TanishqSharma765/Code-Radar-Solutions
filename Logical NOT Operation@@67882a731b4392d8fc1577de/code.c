#include <stdio.h>

int main() {
    int a;

    // Taking input for an integer
    scanf("%d", &a);

    // Performing logical NOT operation
    if (!a) {
        printf("True\n");  // If a is 0, !a becomes 1 (True)
    } else {
        printf("False\n"); // If a is nonzero, !a becomes 0 (False)
    }

    return 0;
}
