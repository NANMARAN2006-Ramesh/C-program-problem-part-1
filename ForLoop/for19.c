#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int gc;
    for(int i=1;i<=a && i<=b ;i++){
        if(a%i==0 && b%i==0){
            if(a<b){
                gc=a;
                gc=i;
            }
            else{
                gc=b;
                gc=i;
            }
        }
    }
    int c = (a*b)/gc;
    printf("%d",c);
}