#include <stdio.h>

int main() {
    double num1, num2, num3, average; // Declare variables

    // Taking input
    printf("");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    // Calculating the average
    average = (num1 + num2 + num3) / 3.0;

    // Printing the result
    printf("Average: %.2lf\n", average); // Print with 2 decimal places

    return 0;
}
