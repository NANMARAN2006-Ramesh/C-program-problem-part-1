#include<stdio.h>
int main(){
    int start = 69;
    int count =1;
    for(int i=1;i<=5;i++){
        count++;
        for(int j=1;j<=i;j++){
            printf("%c",start);
            start++;
        }
        start-=count;
        printf("\n");
    }
}