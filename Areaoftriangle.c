#include<stdio.h>
void main() {
    int a,b,area;
    printf("Enter value of base of triangle:");
    scanf("%d",&a);
    printf("Enter value of height of triangle:");
    scanf("%d",&b);
    area=0.5*b*a;
    printf("Area of triangle is:");
    printf("%d",area);
}

