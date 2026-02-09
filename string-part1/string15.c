#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int j = strlen(str) - 1; 
    int space = 1;
    for (int i = 0; i < j; i++) {
        if(str[i]==' '){
            space++;
        }
    }
    printf("The Word count is %d", space);
    return 0;
}
