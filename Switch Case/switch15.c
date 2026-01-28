#include<stdio.h>
int main(){
    int mode;
    scanf("%d",&mode);
    char ch;
    scanf(" %c",&ch);
    switch (mode)
    {
        case 1:
            if(ch=='R'){
                printf("5000");
            }
            else if(ch=='S'){
                printf("3000");
            }
            break;
        case 2:
            if(ch=='R'){
                printf("9000");
            }
            else if(ch=='S'){
                printf("7000");
            }
            break;
    
    default:
        break;
    }
    return 0;
}