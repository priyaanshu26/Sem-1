#include<stdio.h>
void main() {
    float F,C;
    //printf("Enter temperature in C value:");
    //scanf("%d",&C);
    printf("Enter temperature in F value:");
    scanf("%f",&F);
    C=((F-32)*5)/9;
    printf("Temperature in C is: %f",C);

}