#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int c = a;
    int d = b;
    a/=b;
    c%=d;
    printf("%d %d",a,c);

    return 0;
}