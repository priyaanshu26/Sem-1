#include <stdio.h>
#include <math.h>

void main() {
    float a,b,c,delta,rdelta,root1,root2,root;
    printf("Enter a,b,c:\n");
    scanf("%f %f %f",&a,&b,&c);
    //b=pow(b,2);
    delta=(b*b)-(4*a*c);
    rdelta=sqrt(delta);
    printf("d=%.2f\n",delta);
    if(a==0){
        printf("Math Error\n");
    }
    else{
        if(delta<0) {
            printf("Imaginary Roots\n");
        }
        else{
            if(delta==0){
                printf("Equal & Real Roots\n");
                root=-b/(2*a);
                printf("Root is: %f\n",root);
            }
            else{
                printf("Real & Different Roots\n");
                root1=(-b+rdelta)/(2*a);
                printf("Root 1 is: %f\n",root1);
                root2=(-b-rdelta)/(2*a);
                printf("Root 2 is: %f\n",root2);
            }
        }
    }
}
