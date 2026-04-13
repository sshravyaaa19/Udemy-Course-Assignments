#include <stdio.h>

int main() {
    int i;

    // For loop: runs a fixed number of times
    printf("For loop:\n");
    for (i = 1; i <= 5; i++) {
        printf("Iteration %d\n", i);
    }

    // While loop: runs while condition is true
    printf("\nWhile loop:\n");
    i = 1;
    while (i <= 5) {
        printf("Iteration %d\n", i);
        i++;
    }

    // Do-while loop: runs at least once, then checks condition
    printf("\nDo-While loop:\n");
    i = 1;
    do {
        printf("Iteration %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
