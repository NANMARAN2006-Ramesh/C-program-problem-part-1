#include<stdio.h>
int main(){
    int Balance;
    scanf("%d",&Balance);
    int n;
    scanf("%d",&n);
    int count=0;
    int sum = 0;
    while (n--)
    {
        int s;
        scanf("%d",&s);
        sum=sum+s;
        if(sum<=Balance){
            count++;
        }
    }
    int cash;
    printf("Successful Purchases: %d\n",count);
    if(sum>Balance){
        cash = sum-Balance;
    }
    printf("Final Balance: %d",cash);

    return 0;
    
}