#include<stdio.h>
void main() {
    int p,r,t;
    float Simpleinterest;
    printf("Enter principle value:");
    scanf("%d",&p);
    printf("Enter rate of interest value:");
    scanf("%d",&r);
    printf("Enter time period value:");
    scanf("%d",&t);
    Simpleinterest=p*r*t*0.01;
    printf("%f",Simpleinterest);
}