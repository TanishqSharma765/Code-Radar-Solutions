#include <stdio.h>

int main() {
    double num1, num2, num3, average; // Declare variables

    // Taking input
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0;

    // Printing the result
    printf("The average is: %.2lf\n", average); // Print with 2 decimal places

    return 0;
}
