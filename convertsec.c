#include<stdio.h>
void main() {
    int H,M,S,Sec;
    printf("Enter seconds:");
    scanf("%d",&Sec);

    H=(Sec/3600);
    M = (Sec -(3600*H))/60;
	S = (Sec -(3600*H)-(M*60));
	
	printf("HH:MM:SS - %d:%d:%d\n",H,M,S);

}
