#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input for two integers
    scanf("%d %d", &num1, &num2);

    // Checking if num1 is less than or equal to num2
    if (num1 <= num2) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
