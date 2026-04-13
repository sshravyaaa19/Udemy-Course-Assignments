#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s1;  // Declare a structure variable

    // Input student details
    printf("Enter roll number: ");
    scanf("%d", &s1.rollNo);

    printf("Enter name: ");
    scanf("%s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // Output student details
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
