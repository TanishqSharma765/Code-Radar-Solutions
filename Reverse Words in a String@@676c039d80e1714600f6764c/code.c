#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWordsInString(char *str) {
    char *wordStart = str;
    char *temp = str;

    while (*temp) {
        if (*temp == ' ') {
            reverseWord(wordStart, temp - 1);
            wordStart = temp + 1;
        }
        temp++;
    }
    reverseWord(wordStart, temp - 1);
}

int main() {
    char str[1000];

    // Read input
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    reverseWordsInString(str);

    printf("%s\n", str);

    return 0;
}
