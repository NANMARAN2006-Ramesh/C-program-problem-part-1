#include<stdio.h>
int main(){
    int space = 4;
    for(int i=1;i<=4;i++){
        for(int j=space;j>=1;j--){
            printf(" ");
        }
        space--;
        for(int k=1;k<=i;k++){
            printf("%c",64+k);
        }

        for(int m=i-1;m>0;m--){
            printf("%c",64+m);
        }
        printf("\n");
    }
}