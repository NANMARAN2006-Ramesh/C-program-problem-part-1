#include<stdio.h>
#include<string.h>
int main(){
    //User name extractor
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j = strlen(str)-1;
    for(int i=0;i<j;i++){
        if(str[i]=='@'){
            break;
        }
        printf("%c",str[i]);
    }
    return 0;
}