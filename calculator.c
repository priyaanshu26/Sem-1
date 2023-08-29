#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operation (+, -, *, /): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        printf("Result: %d\n", num1 + num2);
    } 
    else if (operation == '-') {
        printf("Result: %d\n", num1 - num2);
    } 
    else if (operation == '*') {
        printf("Result: %d\n", num1 * num2);
    } 
    else if (operation == '/') {
        if (num2 != 0) {
            printf("Result: %d\n", num1 / num2);
        } else {
            printf("Error");
        }
    } else {
        printf("Invalid operation.\n");
    }
}
