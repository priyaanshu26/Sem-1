#include <stdio.h>
void main() {
    int n,i=0,j=0,k=0;
    while(k<10){
        scanf("%d",&n);
        if (n%2==0) {
            i++;
        } else {
            j++;
        }
        k++;
    }
    printf("Even= %d\n",i);
    printf("Odd= %d\n",j);
}
