#include<stdio.h>
int main(){
    int plan;
    scanf("%d",&plan);
    switch (plan){
        case 1:
            int a;
            scanf("%d",&a);
            if(a==11 || a==12){
                int bill = 199-20;
                printf("pay %d",bill);
            }
            else{
                printf("Pay 199");
            }
            break;
        case 2:
            int b;
            scanf("%d",&b);
            if(a==11 || a==12){
                int bill = 399-20;
                printf("pay %d",bill);
            }
            else{
                printf("Pay 399");
            }
            break;   

    }
    return 0 ;

}