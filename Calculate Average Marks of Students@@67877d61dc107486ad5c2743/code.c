#include <stdio.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n;

    struct Student students[n];
    float totalMarks = 0;


    float averageMarks = totalMarks / n;
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}
