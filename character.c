#include <stdio.h>

void main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("Entered character is uppercase.");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Entered character is lowercase.\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Entered character is a digit.\n");
    } else {
        printf("Entered character is a special character.\n");
    }
}
