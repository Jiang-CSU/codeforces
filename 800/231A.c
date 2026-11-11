#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int result = 0;
    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            int solve;
            scanf("%d", &solve);

            if (solve == 1)
            {
                count++;
            }
        }

        if (count >= 2)
        {
            result++;
        }
    }

    printf("%d", result);

    return 0;
}