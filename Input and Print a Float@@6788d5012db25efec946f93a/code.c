#include <stdio.h>

int main() {
    float number;

    // Taking input
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Printing the entered number
    printf("You entered: %.2f\n", number);

    return 0;
}
