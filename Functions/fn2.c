#include <stdio.h>
#include <string.h>
int element(int size,int arr[],int search){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            count++;
            break;
        }
    }
    return count;
}
int main() {
    int size;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array element : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int search;
    printf("Enter the search element : ");
    scanf("%d",&search);
    int total = element(size,arr,search);
    if(total==1){
        printf("Element Found");
    }
    else{
        printf("Element not found");
    }
    return 0;
}