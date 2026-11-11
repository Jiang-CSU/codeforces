#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int x = 0;
    while (n--)
    {
        char str[4];
        scanf("%s", str);

        if (str[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    printf("%d", x);

    return 0;
}