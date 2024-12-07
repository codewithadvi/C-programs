#include <stdio.h>

struct Student {
    char name[50];
    int rollno;
    int marks[3];
    int total;
    float avg;  // Changed to float for correct average calculation
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);  // Removed & for name

        printf("Roll no: ");
        scanf("%d", &students[i].rollno);

        printf("Marks in 3 subjects:\n");
        students[i].total = 0;  // Initialize total to 0

        for (int j = 0; j < 3; j++) {
            scanf("%d", &students[i].marks[j]);
            students[i].total += students[i].marks[j];  // Add marks to total
        }

        students[i].avg = students[i].total / 3.0;  // Calculate average
    }

    printf("Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll no: %d, Total: %d, Avg: %0.2f\n",
               students[i].name, students[i].rollno, students[i].total, students[i].avg);
    }

    return 0;
}
