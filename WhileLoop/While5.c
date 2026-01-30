#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0,count1=0;
    int arr[n];
    int i=0;
    while(i<n){
        scanf("%d",&arr[i]);

        if(arr[i]==0){
            count++;
        }
        if(arr[i]==1){
            count1++;
        }
        i++;
    }
    printf("Successful : %d\n",count1);
    printf("Cancelled : %d\n",count);
    if(count==count1 || count1>count){
        printf("Status : Safe");
    }
    else{
        printf("Status : Risk");
    }
    return 0;
}