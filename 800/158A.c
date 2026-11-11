#include <stdio.h>

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int score = arr[k - 1];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= score && arr[i] > 0)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}