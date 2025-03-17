#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Calculate the length of the string
    int length = strlen(str);

    // Reverse the string in place
    start = 0;
    end = length - 1;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move indices
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}

