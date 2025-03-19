#include <stdio.h>

int main() {
    char name[50], hobby[50]; // Declare character arrays for name and hobby
    int age; // Declare an integer for age

    // Taking input
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read full name (including spaces)

    printf("Enter your age: ");
    scanf("%d", &age); // Read age

    getchar(); // Consume the newline character left by scanf

    printf("Enter your hobby: ");
    fgets(hobby, sizeof(hobby), stdin); // Read full hobby (including spaces)

    // Printing the details
    printf("\nYour details:\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Hobby: %s", hobby);

    return 0;
}
