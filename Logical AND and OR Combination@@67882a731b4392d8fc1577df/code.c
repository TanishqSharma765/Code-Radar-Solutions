#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Logical AND-OR combination
    if ((a > 0 && b <= 0) || (a == 0 && b == 0)) {
        printf("True\n");  // Condition met
    } else {
        printf("False\n"); // Condition not met
    }

    return 0;
}


