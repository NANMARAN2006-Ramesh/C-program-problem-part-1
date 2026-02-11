#include<stdio.h>
int digitcount(int num){
    int count = 0;
    for(;num>0;num=num/10){
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("Enter a numbner : ");
    scanf("%d",&num);
    int result = digitcount(num);
    printf("The count digit in a number : %d",result);
    return 0;
}