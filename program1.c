#include<stdio.h>
int main(){
    int length;
    printf("Enter the length: \n");
    scanf("%d",&length);
    int distance[length];
    int fuelCost[length];

    printf("Enter the distance: \n");
    for(int i=0;i<length;i++){
        scanf("%d",&distance[i]);
    }
    printf("Enter the fuel cost: \n");
    for(int i=0;i<length;i++){
        scanf("%d",&fuelCost[i]);
    }

    int sum = 0;
    for(int i=0;i<length;i++){
        int mul = 1;
        if(distance[i]>50){
            mul = distance[i]*fuelCost[i];
            sum = sum+mul;
        }
    }

    printf("The total fuel cost is: %d",sum);

    return 0;
}