#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Declare character arrays to store strings

    printf("");
    fgets(str1, sizeof(str1), stdin); // Read first string (including spaces)

    printf("");
    fgets(str2, sizeof(str2), stdin); // Read second string (including spaces)

    // Print the entered strings
    printf("You entered: %s", str1);
    printf("%s", str2);

    return 0;
}

