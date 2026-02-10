#include<stdio.h>
void Reverse(int p){
    for(;p>0;p=p/10){
        printf("%d",p%10);
    }
}

int main(){
    int p;
    printf("Enter the values: ");
    scanf("%d",&p);
    Reverse(p);
    return 0;
}