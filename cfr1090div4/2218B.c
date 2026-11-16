#include <stdio.h>

int main(void)
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int arr[7];

        for (int i = 0; i < 7; i++)
        {
            scanf("%d", &arr[i]);
        }

        int maxNumber = arr[0];
        int total = 0;
        for (int i = 0; i < 7; i++)
        {
            if (arr[i] > maxNumber)
            {
                maxNumber = arr[i];
            }

            total += arr[i];
        }

        printf("%d\n", -total + 2 * maxNumber);
    }

    return 0;
}