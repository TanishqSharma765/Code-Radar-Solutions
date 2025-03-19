#include <stdio.h>

int main() {
    int num1, num2, sum; // Declare variables

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2); // Read two integers

    sum = num1 + num2; // Calculate the sum

    // Print the sum
    printf("Sum: %d\n", sum);

    return 0;
}
