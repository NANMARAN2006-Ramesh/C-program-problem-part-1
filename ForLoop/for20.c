#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sq;
    int sum=0;
    for(int i=1;i<=n;i++){
        sq = i*i;
        sum = sum+sq;
    }
    printf("%d",sum);
    return 0;
}