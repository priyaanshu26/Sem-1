#include <stdio.h>
void main() 
{
    int a,b,c,d;
    printf("Enter value of a for multiply by 2:");
    scanf("%d",&a);
    b=a<<1;
    printf("Output = %d", b);
    printf("Enter value of c for divide by 2:");
    scanf("%d",&c);
    d=c>>1;
    printf("Output = %d", d);

}