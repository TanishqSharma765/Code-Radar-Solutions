#include <stdio.h>

// Define a structure to store student details
struct Student {
    int roll;
    char name[100];
    double marks;
};

int main() {
    int n;
    scanf("%d", &n); // Read the number of students

    struct Student students[n]; // Declare an array of structures
    double total_marks = 0;

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].roll, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }

    // Calculate and print average marks
    double average_marks = total_marks / n;
    printf("Average Marks: %.2lf\n", average_marks);

    return 0;
}



