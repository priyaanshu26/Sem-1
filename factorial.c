#include <stdio.h>
void main() {
    int i=1,n,fac=1,j;
    printf("Enter value of n:");
    scanf("%d",&n);
    j=n;
    while (i<=n) {
        fac=fac*j;
        i++;
        j--;
    }
    printf(" %d ",fac);
    
}