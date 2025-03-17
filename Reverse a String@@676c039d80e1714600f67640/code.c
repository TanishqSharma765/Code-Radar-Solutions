#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string using strrev()
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
