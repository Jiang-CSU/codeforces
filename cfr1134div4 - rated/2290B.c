#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        char str[n + 1];
        scanf("%s", str);

        int count = 0;
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (i == 0 && str[i] == 'B')
            {
                count++;
            }
            else
            {
                if (str[i] == str[i - 1])
                {
                    count++;
                }
            }
        }

        printf("%d\n", count);


    }
    return 0;
}