#include<stdio.h>

int main(){
    int length;
    printf("Enter the length of the array: ");
    scanf("%d",&length);

    int arr[length];
    
    printf("Enter the array values: ");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    float sum = 0;
    float highest = 0;
    int highIndex = -1;
    float lowest = 0;
    int lowIndex = -1; 
    int count = 0;
    if(length<7){
        printf("Invalid input : exactly 7 daily temperature is required");
    }
    else{
        for(int i=1;i<=length;i++){
            float fahrenheit = 1.0;
            if(arr[i]>arr[i+1]){
                highest = ((arr[i]*9/5)+32);
                highIndex= i;
            }
            else if(arr[i]<arr[i+1] || lowest==0){
                lowest = ((arr[i]*9/5)+32);
                lowIndex = i;
            }
            fahrenheit = (arr[i]*9/2)+32;
            if(arr[i]<=0){
                count++;
            }
            sum = sum+fahrenheit;
        }
        float avg = sum/length;
        printf("HighestF: %.2f\n",highest);
        printf("LowestF: %.2f\n",lowest);
        printf("AverageF: %.2f\n",avg); 
        switch(highIndex){
            case 1: 
                printf("Warmest Day: Monday\n");
                break;
            case 2: 
                printf("Warmest Day: Tuesday\n");
                break;
            case 3: 
                printf("Warmest Day: Wednesday\n");
                break;
            case 4: 
                printf("Warmest Day: Thursday\n");
                break;
            case 5: 
                printf("Warmest Day: Friday\n");
                break;
            case 6: 
                printf("Warmest Day: Saturday\n");
                break;
            case 7: 
                printf("Warmest Day: Sunday\n");
                break;
        }
        printf("Freezing Days Count: %d days with temperature less than 0\n",count);
        printf("Week Summary: Highest %.2f on %d, Lowest: %.2f on %d, Average: %.2f F, %d days on freezing days is %d.",highest,highIndex,lowest,lowIndex,avg,length,count);
    }
    return 0;
}