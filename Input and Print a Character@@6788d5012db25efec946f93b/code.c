#include <stdio.h>

int main() {
    char ch; // Declare a character variable

    printf("Enter a character: ");
    scanf(" %c", &ch); // Use a space before %c to ignore any whitespace

    // Printing the entered character
    printf("You entered: %c\n", ch);

    return 0;
}
