#include <stdio.h>

// Define a structure for Student
struct Student {
    int roll;
    char name[100];
    double marks;
};

int main() {
    int n;
    double total_marks = 0, average_marks;

    scanf("%d", &n);  // Read the number of students

    struct Student students[n]; // Declare an array of structures

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].roll, students[i].name, &students[i].marks);
        total_marks += students[i].marks;
    }

    // Calculate average marks
    average_marks = total_marks / n;

    // Print total and average marks with 2 decimal places
    printf("Total Marks: %.2lf\n", total_marks);
    printf("Average Marks: %.2lf\n", average_marks);

    return 0;
}
