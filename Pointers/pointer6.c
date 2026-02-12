#include<stdio.h>
void ReverseArray(int size, int arr[]){
    int *v = arr;
    for(int i=size-1;i>=0;i--){
        printf("%d ",*(v+i));
    }
}

int main(){
    int size;
    printf("Enter the array size: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements : \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    ReverseArray(size,arr);
}