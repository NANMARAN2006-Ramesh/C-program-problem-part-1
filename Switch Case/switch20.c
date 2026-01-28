#include<stdio.h>
int main(){
    int role;
    scanf("%d",&role);
    int access;
    scanf("%d",&access);
    switch (role)
    {
        case 1:
            if(access>=1){
                printf("Full Access");
            }
            break;
        case 2:
            if(access>=9 && access<=18){
                printf("Limited Access");
            }
            else{
                printf("Access Denied");
            }
            break;
        default:
            break;
    }
    return 0;
}