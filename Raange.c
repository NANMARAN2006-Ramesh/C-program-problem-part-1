#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=10 && a<=20){
        printf("Number within Range");
    }
    else{
        printf("Number Not a Range");
    }

    return 0;
}