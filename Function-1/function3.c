#include<stdio.h>
void EvenOdd(int p){
    if(p%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

int main(){
    int p;
    printf("Enter the values: ");
    scanf("%d",&p);
    EvenOdd(p);
    return 0;
}