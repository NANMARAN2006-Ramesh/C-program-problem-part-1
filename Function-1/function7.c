#include<stdio.h>
void Prime(int p){
    int isPrime = 1;
    for(int i=2;i<p;i++){
        if(p%i==0){
            isPrime=0;
        }
    }
    if(isPrime){
        printf("Prime");
    }
    else{
        printf("Not a prime");
    }
}

int main(){
    int p;
    printf("Enter the values: ");
    scanf("%d",&p);
    Prime(p);
    return 0;
}