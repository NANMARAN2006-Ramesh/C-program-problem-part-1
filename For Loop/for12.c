#include<stdio.h>
int main(){
    int n,p;
    scanf("%d\n%d",&n,&p);
    int sum = 1;
    for (int i=1;i<=p;i++){
        sum = sum*n;
    }
    printf("%d",sum);
    return 0;
}