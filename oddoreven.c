#include <stdio.h>
void main () {
    int n;
    printf("Enter value of n:");
    scanf("%d",&n);
    if ( n%2==0) {
        printf("n is even");
        
    }else{
        printf("n is odd");
    }
}