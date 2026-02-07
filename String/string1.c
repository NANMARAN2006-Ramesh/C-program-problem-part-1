#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    if (str[n-1] == '\n') str[n-1] = '\0'; // remove newline
    n = strlen(str);
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        int len = 0;
        for (int j = i; j < n; j++) {
            int duplicate = 0;
            for (int k = i; k < j; k++) {
                if (str[k] == str[j]) {
                    duplicate = 1;
                    break;
                }
            }
            if (duplicate) break; 
            len++;
        }

        if (len > maxLen) {
            maxLen = len;
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
