#include <stdio.h>
void main() {
    int a;
    printf("Enter a : ");
    scanf("%d",&a);
    (a%2==0)?printf("a is even"): printf("a is odd");
}