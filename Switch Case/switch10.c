#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    switch (m)
    {
        case 1:
            int year;
            scanf("%d",&year);
            if(year>=3){
                int salary = 50000;
                int total = salary+(year*5000);
                printf("Salary %d",total);
            }
            else{
                printf("50,000");
            }
            break;
        case 2:
            int y;
            scanf("%d",&y);
            if(y>=3){
                int salary = 35000;
                int total = salary+(y*5000);
                printf("Salary %d",total); 
            }
            else{
                printf("35,000");
            }
            break;
    default:
        break;
    }
    return 0;
}