#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d%d", &r, &c);
    int arr[r][c];
    int minsum = 0;
    int index = 0;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
        }
        if(sum==0){
            continue;
        }
        if(minsum==0 || sum<minsum){
            minsum=sum;
            index = i;
        }
    }
    printf("Minimum sum index is %d", index);
    return 0;
}
