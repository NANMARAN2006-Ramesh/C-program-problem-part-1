#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char s[110];
    fgets(str, sizeof(str), stdin);
    fgets(s,sizeof(s),stdin);
    int j = strlen(str) - 1; 
    int index = -1;
    for (int i = 0; i < j; i++) {
        if(str[i]==s[0]){
            index = i;
            break;
        }
    }
    printf("The first Occurence Search index is %d", index);
    return 0;
}
