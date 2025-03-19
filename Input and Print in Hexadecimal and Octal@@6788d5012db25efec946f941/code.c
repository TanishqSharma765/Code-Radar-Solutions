#include <stdio.h>

int main() {
    int number; // Declare an integer variable

    printf("");
    scanf("%d", &number); // Read an integer

    // Print the number in different formats
    printf("Hexadecimal: %X\n", number); // %X for uppercase hexadecimal
    printf("Octal: %o\n", number); // %o for octal format

    return 0;
}

