#include <stdio.h>
void main() {
int i=100;
while (i<200) {
    if(i%7==0 && i%5!=0){
        printf(" %d ",i);
    }
    i++;
}
}