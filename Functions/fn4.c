#include<stdio.h>
#include<string.h>
int extractnumber(int j, char str[]){
    for(int i=0;i<j;i++){
        if(str[i]>='0' && str[i]<='9'){
            printf("%c",str[i]);
        }
    }
    return 0;
}


int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j=strlen(str)-1;
    extractnumber(j,str);
    return 0;
}