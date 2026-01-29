#include <stdio.h>

int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    int count=0;
    int count1=0;
    while (i<n)
    {
        scanf("%d",&arr[i]);
        
        if(arr[i]>70){
            count++;
        }
        if(arr[i]>70 && arr[i+1]>70){
            count1++;
        }
        i++;
    }
    printf("Noise Violation: %d\n",count);
    printf("Longest Violation steak: %d",count1);
    return 0;
}