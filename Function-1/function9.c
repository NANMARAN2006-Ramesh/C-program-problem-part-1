#include<stdio.h>
void palindrome(int p){
    int temp = p;
    int sum = 0;
    for(;p>0;p=p/10){
        int a=p%10;
        sum=sum*10+a;
    }
    if(sum==temp){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
}

int main(){
    int p;
    printf("Enter the values: ");
    scanf("%d",&p);
    palindrome(p);
    return 0;
}