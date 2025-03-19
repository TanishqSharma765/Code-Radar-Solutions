#include <stdio.h>

int main() {
    double number; // Declare a double variable

    printf("");
    scanf("%lf", &number); // Read a double value

    // Print the entered double
    printf("You entered: %.4lf\n", number); // Print with 2 decimal places

    return 0;
}
