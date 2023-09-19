#include <stdio.h>
#include <math.h>
void main() {
    int i=0;
    float root;
    while(i<10) {
        root=sqrt(i);
        
        printf(" %d ",i);
        printf("squareRoot %f \n",root);
        i++;
    }
}