#include <stdio.h>
void main() {
    int n,i=0;
    printf("Enter value n:");
    scanf("%d", &n);
    while (i<n) {
        if (i%2!=0){
            printf("%d ",i);
        }
        ++i;
           }
}