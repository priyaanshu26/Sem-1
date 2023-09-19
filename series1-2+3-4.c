#include <stdio.h>
void main() {
    int i=1, sum=0,n;
    printf("Enter valur of n:");
    scanf("%d",&n);
    while(i<=n) {
        if(i%2==0) {
            sum=sum-i;
        } else {
            sum=sum+i;
        }
            i++;
    }
        printf("Sum: %d",sum);

}