#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int j=strlen(str)-1;
    int count = 0;
    int max = 0;
    for(int i=0;i<j;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count++;
            printf("Count is %d\n",count);
        }
        else{
            count = 0;
        }
        if(count>max){
            max = count;
        }
    }
    printf("The maximum consecutive Vowels is %d",max);
    return 0;
}