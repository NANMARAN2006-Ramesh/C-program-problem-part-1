#include<stdio.h>
int power(int num,int power){
    int power1 = 1;
    for(int i=1;i<=power;i++){
        power1 = power1*num;
    }
    return power1;
}
int main(){
    int num,pow;
    printf("Enter a numbner : ");
    scanf("%d%d",&num,&pow);
    int result = power(num,pow);
    printf("Power of a number : %d",result);
    return 0;
}