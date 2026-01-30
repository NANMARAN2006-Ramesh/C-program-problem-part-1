#include<stdio.h>
int main(){
    int weight;
    scanf("%d",&weight);
    int n;
    scanf("%d",&n);
    int count=0;
    int sum = 0;
    while (n--)
    {
        int s;
        scanf("%d",&s);
        sum=sum+s;
        if(sum<=weight){
            count++;
        }
    }
    printf("People Entered: %d\n",count);
    if(sum>weight){
        printf("Overload Status: Yes");
    }
    else{
        printf("Overload Status: No");
    }

    return 0;
    
}