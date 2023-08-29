#include <stdio.h>

int main() {
    float basicSalary, grossSalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary >= 30000) {
        grossSalary = basicSalary + 0.3 * basicSalary + 0.95 * basicSalary;
    } else if (basicSalary >= 20000) {
        grossSalary = basicSalary + 0.25 * basicSalary + 0.9 * basicSalary;
    } else if (basicSalary >= 10000) {
        grossSalary = basicSalary + 0.2 * basicSalary + 0.8 * basicSalary;
    } else {
        printf("basic salary is below 10000");
    }
    printf("Gross Salary: %f", grossSalary);
}