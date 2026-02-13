#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the starting pointer index\n");
    scanf("%d",&index);
    int *p = arr;
    for(int i=index;i<size;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}