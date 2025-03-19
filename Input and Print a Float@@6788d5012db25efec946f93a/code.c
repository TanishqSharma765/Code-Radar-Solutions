#include <stdio.h>

int main() {
    float number; // Declare the variable

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Printing the entered number with 2 decimal places
    printf("You entered: %.2f\n", number);

    return 0;
}

