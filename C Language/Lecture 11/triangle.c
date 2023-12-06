#include <stdio.h>

int main() {
    int i, j, rows;

    // Set the number of rows for the pattern
    rows = 5;

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        // Inner loop for printing spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }

        // Inner loop for printing '*' characters
        for (j = i; j <= rows; j++) {
            printf("*");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

