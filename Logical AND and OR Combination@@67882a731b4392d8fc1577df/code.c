#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Logical AND-OR combination with stricter conditions
    if ((a > 0 && b < 0) || (a == 0 && b == 0)) {
        printf("True\n");  
    } else {
        printf("False\n");  
    }

    return 0;
}



