#include <stdio.h>

int main() {
    char ch; // Declare a character variable

    printf(" ");
    scanf(" %c", &ch); // Use a space before %c to ignore any whitespace

    // Printing the entered character
    printf("You entered: %c\n", ch);

    return 0;
}
