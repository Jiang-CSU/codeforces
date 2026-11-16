#include <stdio.h>
#include <math.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + 1 == b && b + 1 == c)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}