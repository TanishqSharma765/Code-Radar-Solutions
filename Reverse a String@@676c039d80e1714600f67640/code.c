#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];  // Adjust size based on constraints
    scanf("%s", str); // Read input
    
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;

    // Reverse the string
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s\n", str);  // Print the reversed string
    return 0;
}


