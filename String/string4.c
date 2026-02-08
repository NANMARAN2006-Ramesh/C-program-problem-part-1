#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str) - 1; 
    char result = -1;
    for(int i = 0; i < n; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < n; j++) {
            if(i != j && str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            result = str[i];
            break;
        }
    }
    if(result == -1)
        printf("-1\n");
    else
        printf("%c\n", result);

    return 0;
}
