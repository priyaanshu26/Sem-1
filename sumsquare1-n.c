#include <stdio.h>
void main() {
    int i=0,sq,n,sum=0;
    printf("Enter value of n:");
    scanf("%d",&n);
    while(i<=n) {
        //sq=pow(i,2);
        sq=i*i;
        sum=sum+sq;
        i++;
    }
    printf("Sum: %d",sum);
}