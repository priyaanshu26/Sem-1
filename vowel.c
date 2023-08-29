#include <stdio.h>
void main () 
{
    char a;
    printf("Enter value of a:");
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u') 
    {
        printf("a is vovel");
        
    }
    else
    {
        printf("a is consonant");
    }
}