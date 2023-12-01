#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int i,j;
    for ( i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[20];
    printf("Enter your string here :");
    scanf("%s",&str);
    printf("Original: %s\n", str);
    reverseString(str);
    printf("Reversed: %s\n", str);
    return 0;
}

