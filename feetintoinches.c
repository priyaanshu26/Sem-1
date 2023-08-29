#include <stdio.h>
void main () {
    float feet, inches;
    printf("Enter feet value:");
    scanf("%f", &feet);
    inches=feet*12;
    printf("Feet = %f", inches);
}