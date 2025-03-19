#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159; // Define constant value for π

    // Taking input for radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Print the area
    printf("Area of the circle: %.2f\n", area); // Print with 2 decimal places

    return 0;
}
