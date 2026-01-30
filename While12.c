#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int max = 0;
    int count = 0;
    while(n--){
        int s;
        scanf("%d",&s);
        if(s>max){
            max=s;
        }

        if(s>5){
            count++;
        }
    }

    printf("Max Usage: %d\n",max);
    printf("Surge Hours: %d",count);

    return 0;
}