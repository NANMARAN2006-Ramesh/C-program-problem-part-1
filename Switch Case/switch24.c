#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int min;
    scanf("%d",&min);
    switch (type)
    {
        case 1: 
            int total = min*1;
            printf("%d",total);
            break;
        case 2:
            int bill = min*3;
            printf("%d",bill);
            break;
        case 3:
            int sum = min*10;
            printf("%d",sum);
            break;
    }
    return 0;
}
