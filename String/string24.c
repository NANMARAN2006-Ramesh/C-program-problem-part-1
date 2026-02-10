#include<stdio.h>
#include<string.h>
int main(){
    char s1[40];
    char s2[20];
    char s3[20];
    fgets(s1,sizeof(s1),stdin);
    fgets(s2,sizeof(s2),stdin);
    fgets(s3,sizeof(s3),stdin);
    int k= strlen(s1)-1+strlen(s2)-1;
    int len1 = strlen(s3)-1;
    int i=0,j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    int isduplicate = 0;
    for(int l=0;l<=len1;l++){
        for(int m=0;m<=k;m++){
            if(s3[l]==s1[m]){
                printf("%c ",s3[l]);
                isduplicate=1;
            }
        }
    }
    if(isduplicate && k==len1){
        printf("Shuffle of Two String compaare : Yes");
    }
    else{
        printf("Shuffle of two string compare : No");
    }
    return 0;
}