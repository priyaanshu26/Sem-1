#include <stdio.h>
void main () {
    int units,amount;
    printf("Enter Units:\n");
    scanf("%d",&units);
    if(units<=50){
        amount=0.5*50;
    }
    else{
        if(units<=150){
            amount=50*0.5+(units-50)*0.75;
        }
        else{
            if(units<=250){
                amount=0.5*50+100*0.75+(units-150)*1.2;
            }
            else{
                amount=0.5*50+100*0.75+150*1.2+(units-250)*1.5;
            }
        }
    }
amount=amount+ amount*0.2;
printf("Total amount: %d",amount);
}