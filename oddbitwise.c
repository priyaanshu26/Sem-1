#include <stdio.h>
void main() 
{
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    if (n & 1 ) {
        printf(" n is odd");
    }else{
        printf("n is even");
    }
}
