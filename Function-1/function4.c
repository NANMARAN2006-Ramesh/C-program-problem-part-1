#include<stdio.h>
void AreaOfCircle(int p){
    float py = 3.14;
    float result = py*(p*p);
    printf("The Area of circle is : %.2f",result);
}

int main(){
    int p;
    printf("Enter the values: ");
    scanf("%d",&p);
    AreaOfCircle(p);
    return 0;
}