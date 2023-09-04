#include <stdio.h>

void main() {
    int marks[5];
    int totalMarks = 0;

    printf("Enter marks of five subjects:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    float percentage = (float)totalMarks / 5;

    int classCode;

    if (percentage < 35) {
        classCode = 0;  // Fail
    } else if (percentage <= 45) {
        classCode = 1;  // Pass Class
    } else if (percentage <= 60) {
        classCode = 2;  // Second Class
    } else if (percentage <= 70) {
        classCode = 3;  // First Class
    } else {
        classCode = 4;  // Distinction
    }

    printf("Class: %d\n", classCode);

}
