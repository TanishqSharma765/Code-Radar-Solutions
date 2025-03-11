#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    float totalMarks = 0;

    for (int i = 0; i < n; i++) {
        printf(""", i + 1);
        scanf("%d %s %f", &students[i].rollNo, students[i].name, &students[i].marks);
        totalMarks += students[i].marks;
    }

    float averageMarks = totalMarks / n;
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
