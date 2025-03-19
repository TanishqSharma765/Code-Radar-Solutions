#include <stdio.h>

int main() {
    int a, b;

    // Taking input for two integers
    scanf("%d %d", &a, &b);

    // Logical NOT and AND combination
    if (!(a > 0) && !(b > 0)) {
        printf("True\n");  // True if both a and b are NOT positive (i.e., a <= 0 and b <= 0)
    } else {
        printf("False\n");  
    }

    return 0;
}
