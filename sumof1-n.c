#include <stdio.h>
void main() {
    int sum=0,n,i=1;
    printf("Enter value of n: ");
    scanf("%d",&n);
    while(i<=n) {
        sum=sum+i;
        printf("%d + ",i);
        ++i;
    }
    printf("SUM= %d",sum);
}