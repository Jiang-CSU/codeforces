#include <stdio.h>

int main(void)
{
    int t;

    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
            printf("%d ", 2 * i - 1 + n);
            printf("%d ", 2 * i + n);
        }

        printf("\n");
    }

    return 0;
}