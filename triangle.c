#include <stdio.h>
void main () {
    int a,b,c,max,s1,s2;
    printf("Enter side of triangle a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c && b==c){
        printf("Triangle is equilateral triangle\n");
    } else{
        if(a==b || a==c || b==c) {
            printf("Triangle is isosceles triangle\n");
        }
    }
    if (a>b) 
    {
        if (a>c) 
        {
            max=a;
            s1=b;
            s2=c;
        }

        else
        {
            max=c;
            s1=a;
            s2=b;
        }
    }
    
    else
    {
        if (b>c)
        {
            max=b;
            s1=a;
            s1=c;
        }
        
        else
        {
            max=c;
            s1=a;
            s2=b;
        }
    }
    if((max*max)==(s1*s1)+(s2*s2)){
    printf("Triangle is Right angled triangle\n ");
    } else{
        if(a!=b && a!=c && b!=c){
            printf("Triangle is scalene triangle\n");
        }
    }
}

