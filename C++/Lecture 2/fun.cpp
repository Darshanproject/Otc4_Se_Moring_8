#include <stdio.h>

int main() {
    int num, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;   // Extract the last digit
        reversed = reversed * 10 + digit;  // Append the digit to the reversed number
        num /= 10;  // Remove the last digit from the original number
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

