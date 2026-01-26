#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("Uppercase Letter");
    }
    else{
        printf("Lowecase Letter");
    }

    return 0;
}