#include<stdio.h>
int main(){
    int units;
    float bill = 0;
    scanf("%d",&units);
    if(units<=100){
        bill = 100*5;
    }
    else{
        bill = (100*5)-(units-100)*5;
    }

    PRINTF("Bill amount = RS, %.2f",bill);
}