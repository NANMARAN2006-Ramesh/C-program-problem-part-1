#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100];
    char s2[100];
    int isduplicate = 0;
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    int len1 = strlen(s1) - 1;
    int len2 = strlen(s2) - 1;
    int count = 0;
    if (len1 != len2)
    {
        printf("No");
    }
    else
    {
        for (int i = 0; i < len1; i++)
        {
            for (int k = i; k <= i; k++)
            {
                if (s1[i] == s1[i + 1] && s2[i] != s2[i + 1])
                {
                    count++;
                    break;
                }
                else
                {
                    if (s1[i] == s2[i] || s1[i] != s2[i])
                    {
                        isduplicate = 1;
                    }
                }
            }
        }
    }
    if (isduplicate && count==0)
    {
        printf("Isomorphic : Yes");
    }
    else if(count>0)
    {
        printf("Isomorphic : No");
    }
    return 0;
}