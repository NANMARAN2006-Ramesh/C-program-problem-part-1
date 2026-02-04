#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    int count = 1;
    scanf("%d", &sum);
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("%d %d", arr[i], arr[j]);
                count = 0;
                break;
            }
        }
    }
    if (count == 1)
    {
        printf("No Pair");
    }

    return 0;
}