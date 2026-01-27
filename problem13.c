#include<stdio.h>
int main(){
    int rows = 5;
    int a =1;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            printf("%d",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}