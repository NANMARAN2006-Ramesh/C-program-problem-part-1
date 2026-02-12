#include<stdio.h>
#include<string.h>
void StringCopy(char str[]){
    char *p=str;
    char str1[100];
    char *s1 = str1;
    for(int i=0;str[i]!='\0';i++){
        *(s1+i)=*(p+i);
    }

    for(int i=0;s1[i]!='\0';i++){
        printf("%c",*(s1+i));
    }
}

int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    StringCopy(str);
}