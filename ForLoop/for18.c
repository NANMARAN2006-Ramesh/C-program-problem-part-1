#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int gc;
    for(int i=1;i<=(a<b?a:b);i++){
        if(a%i==0 && b%i==0){
            gc = i;
        }
    }
    printf("%d",gc);
}