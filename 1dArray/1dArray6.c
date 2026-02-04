#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0 ;i<n ;i++){
       int dupilicate =0 ;
       for(int j=0 ;j<i ;j++){
            if(arr[j] == arr[i]){
                dupilicate = 1;
                break;
            }
       }
       if(!dupilicate){
        printf("%d ",arr[i]);
       }
    }
    return 0;
}