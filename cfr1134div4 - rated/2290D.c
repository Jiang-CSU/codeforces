
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char str[n + 1];
        scanf("%s", str);

        int minArr[n / 2];
        int maxArr[n / 2];

        int index = 0;

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            int max = str[i] >= str[j] ? str[i] : str[j];
            int min = str[i] < str[j] ? str[i] : str[j];

            if (min == max)
                continue;

            // 不断合并所有与当前区间相交的区间
            bool flag = true;

            while (flag)
            {
                flag = false;

                for (int k = 0; k < index; k++)
                {
                    if (min <= maxArr[k] && max >= minArr[k])
                    {
                        if (maxArr[k] > max)
                            max = maxArr[k];

                        if (minArr[k] < min)
                            min = minArr[k];

                        // 删除第 k 个区间
                        index--;
                        minArr[k] = minArr[index];
                        maxArr[k] = maxArr[index];

                        flag = true;
                        break;
                    }
                }
            }

            // 插入合并后的区间
            minArr[index] = min;
            maxArr[index] = max;
            index++;
        }

        int result = 0;

        for (int i = 0; i < index; i++)
        {
            result += maxArr[i] - minArr[i];
        }

        printf("%d\n", result);
    }

    return 0;
}
