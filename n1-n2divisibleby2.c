#include <stdio.h>
void main() {
    int n2,i;
    printf("Enter value n1:");
    scanf("%d", &i);
    printf("Enter value n2:");
    scanf("%d", &n2);
    while ((i)<(n2-1)) {
        i++;
        if (i%2==0){
        printf("%d ",i);
        }
   }
}  