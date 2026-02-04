#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int first=0;
    int count = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]>first){
            count++;
            first=arr[i];
        } 
    }
    if(count==n){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}