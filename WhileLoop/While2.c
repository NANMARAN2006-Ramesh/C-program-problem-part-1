#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int balance, lowbalance;
    scanf("%d", &balance);
    int arr[n];
    int sum = 0;
    int sum2 = 0;
    int sum3 = 0;
    int i = 0;
    while (i < n)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            sum += arr[i];
        }
        else
        {
            sum2 -= arr[i];
        }
        i++;
    }
    sum3 = (balance + sum) - sum2;
    if (sum3 < 2000 && sum3 > 1000)
    {
        lowbalance = 2;
    }
    else if (sum3 >= 2000)
    {
        lowbalance = 0;
    }
    else
    {
        lowbalance = 3;
    }
    printf("Final Balance: %d\n", sum3);
    printf("Low Balance Days: %d", lowbalance);
    return 0;
}