#include <stdio.h>
void main(){
int operator;
float ans,a,b;
printf("Enter a : ");
scanf ("%f",&a);
printf("Enter b : ");
scanf ("%f",&b);
printf(" \nAddition: 1 \n Subtraction: 2 \n Multiplication: 3 \n Division: 4 \n Enter operator : ");
scanf ("%d",&operator);
switch(operator){
case 1:
ans=a+b;
printf("Answer = %f",ans);
break;
case 2:
ans=a-b;
printf("Answer = %f",ans);
break;
case 3:
ans=a*b;
printf("Answer = %f",ans);
break;
case 4:
ans=a/b;
printf("Answer = %f",ans);
break;
default:
printf("Invalid operator");
}
}