#include<stdio.h>
int main(){
    int attempt;
    scanf("%d",&attempt);
    int score;
    scanf("%d",&score);
    switch (attempt)
    {
        case 1:
            if(score>=80){
                printf("Excellent");
            }
            break;
        case 2:
            if(score>=60){
                printf("Good");
            }
            break;
        default:
            printf("Needs Improvement");
            break;
    }
    return 0;
}