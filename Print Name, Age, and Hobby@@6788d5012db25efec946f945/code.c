#include <stdio.h>

int main() {
    char name[50], hobby[50]; // Declare character arrays for name and hobby
    int age; // Declare an integer for age

    // Taking input
    scanf("%s", name); // Read name (stops at space)
    scanf("%d", &age); // Read age

    getchar(); // Consume the leftover newline

    fgets(hobby, sizeof(hobby), stdin); // Read full hobby (including spaces)

    // Printing the details
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby); // fgets already includes a newline

    return 0;
}

