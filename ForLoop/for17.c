#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    int sum = 0;
    int temp=n;
    for(;n>0;n=n/10){
        a = n%10;
        int fact=1;
        for (int i=1;i<=a;i++){
            fact = fact*i;
            
        }
        sum = sum+fact;
    } 
    
    if(temp==sum){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
