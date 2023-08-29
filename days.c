#include<stdio.h>
void main() {
    int Y,W,D,days;
    printf("Enter days:");
    scanf("%d",&days);

    Y=(days/365);
    W = (days -(365*Y))/7;
	D = (days -(365*Y)-(W*7));
	
	printf(" Year is %d",Y);
    printf(" Week is %d",W);
    printf(" Days is %d",D);

}
