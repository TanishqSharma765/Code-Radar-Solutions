#include <stdio.h>
#include <string.h>

// Define a structure for Student
struct Student {
    int roll;
    char name[100];
    double marks;
};

int main() {
    int n, search_roll, found = 0;
    scanf("%d", &n);  // Read the number of students

    struct Student students[n]; // Declare an array of structures

    // Read student details
    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &students[i].roll, students[i].name, &students[i].marks);
    }

    // Read roll number to search
    scanf("%d", &search_roll);

    // Search for the student
    for (int i = 0; i < n; i++) {
        if (students[i].roll == search_roll) {
            printf("Roll Number: %d, Name: %s, Marks: %.2lf\n", students[i].roll, students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    // If student not found
    if (!found) {
        printf("Student not found\n");
    }

    return 0;
}
