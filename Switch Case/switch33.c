#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    int days;
    scanf("%d",&days);
    switch (type)
    {
        case 1: 
            int bill = days*2;
            printf("Late fee %d",bill);
            break;
        case 2:
            int sum = days*5;
            printf("Late fee %d",sum);
            break;
    }
    return 0;
}
