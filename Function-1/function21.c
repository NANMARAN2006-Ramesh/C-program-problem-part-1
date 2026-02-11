#include<stdio.h>
void menuDriven(int a,int b,char ch){
    int result;
    switch (ch)
    {
    case '+':
        result = a+b;
        printf("Addition of Two number is : %d",result);
        break;
    case '-':
        result = a-b;
        printf("Subtract of two number is : %d",result);
        break;
    case '*':
        result = a*b;
        printf("Multiplication of two number is : %d",result);
        break;
    case '/':
        result = a/b;
        printf("Divide of two number is : %d",result);
        break;
    }
}

int main(){
    char ch;
    printf("Enter the choic : ");
    scanf("%c",&ch);
    int a,b;
    printf("Enter the numbers : ");
    scanf("%d%d",&a,&b);
    menuDriven(a,b,ch);
}