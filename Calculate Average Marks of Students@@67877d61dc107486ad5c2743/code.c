#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of students

    double total_marks = 0, marks;
    char name[100]; // To store the name
    int roll;

    for (int i = 0; i < n; i++) {
        scanf("%d %s %lf", &roll, name, &marks); // Read roll number, name, and marks
        total_marks += marks;
    }

    double average_marks = total_marks / n;
    printf("Average Marks: %.2lf\n", average_marks); // Print average rounded to 2 decimal places

    return 0;
}


