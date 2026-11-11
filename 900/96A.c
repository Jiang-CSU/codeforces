#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char str[101];

    scanf("%s", str);
    int length = strlen(str);

    if (length <= 7)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i <= length - 7; i++)
    {
        bool flag = true;

        for (int j = i; j < i + 7; j++)
        {
            if (str[j] != str[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            printf("YES");
            return 0;
        }
    }

    printf("NO");

    return 0;
}