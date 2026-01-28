#include<stdio.h>
int main(){
    int distcat;
    scanf("%d",&distcat);
    switch (distcat)
    {
        case 1: 
            printf("Transport Fee 800");
            break;
        case 2:
            printf("Transport Fee 1200");
            break;
        case 3:
            printf("Transport Fee 1800");
            break;
    }
    return 0;
}
