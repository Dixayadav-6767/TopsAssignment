#include <stdio.h>

// Structure definition
struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s[3];  // Array of 3 students
    int i;

    // Input data for each student
    for(i = 0; i < 3; i++) {
        printf("\nEnter details for Student %d\n", i+1);
        printf("Roll number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display all student details
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i+1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}

