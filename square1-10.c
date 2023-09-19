#include <stdio.h>
#include <math.h>
void main() {
    float i=1,sq=0;
    while(i<=10) {
        sq=pow(i,2);
        printf(" %.2f ",sq);
        i++;
    }
}