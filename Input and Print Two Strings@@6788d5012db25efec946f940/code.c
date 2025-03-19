#include <stdio.h>

int main() {
    char str1[100], str2[100]; // Declare character arrays to store strings

    printf("");
    scanf("%s", str1); // Read first string (without spaces)

    printf("");
    scanf("%s", str2); // Read second string (without spaces)

    // Print the entered strings
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);

    return 0;
}
