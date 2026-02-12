#include<stdio.h>
#include<string.h>
void vowelStop(char str[],int j){
    char *p = str;
    int count = 0;
    for(int i=0;i<j;i++){
        if(*(p+i)=='a' ||*(p+i)=='e' ||*(p+i)=='i' ||*(p+i)=='o' ||*(p+i)=='u' ||*(p+i)=='A' ||*(p+i)=='E' ||*(p+i)=='O' ||*(p+i)=='I' ||*(p+i)=='U'){
            count++;
        }
    }
    printf("The string vowel count is : %d",count);
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    vowelStop(str,j);
}