#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    float marks, totalMarks = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks);
        totalMarks += marks;
    }

    float averageMarks = totalMarks / n;
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}

