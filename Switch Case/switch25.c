#include<stdio.h>
int main(){
    int type;
    scanf("%d",&type);
    switch (type)
    {
        case 1: 
            printf("Exam fee 1200");
            break;
        case 2:
            printf("Exam fee 800");
            break;
        case 3:
            printf("Exam fee 500");
            break;
    }
    return 0;
}
