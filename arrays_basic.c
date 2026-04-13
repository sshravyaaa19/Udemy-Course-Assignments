#include <stdio.h>

int main() {
    int marks[5];  // Array of 5 integers
    int i;

    // Input values into the array
    printf("Enter marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Output values from the array
    printf("\nMarks entered are:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

    return 0;
}
