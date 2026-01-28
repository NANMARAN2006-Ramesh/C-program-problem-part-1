#include<stdio.h>
int main(){
    int type,balance,withdraw;
    int limit = 5000;
    scanf("%d%d%d",&type,&balance,&withdraw);
    switch(type){
        case 1:
            if(withdraw<balance){ 
                printf("Trasaction Sucessfull");
            }
            else{
                printf("Limit Exceeded");
            }
            break;
        case 2:
            if(withdraw<limit && withdraw<balance){
                printf("Transaction Successfull");
            }
            else{
                printf("Limit Exceeded");
            }
            break;
    }
    return 0;
}