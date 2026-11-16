// qsort的复杂度可能会退化为O(n ^ 2)，此时面对10的五次方数量级必定tle。使用mergesort或者heapsort可规避此问题。或使用C++的std::sort进行优化。请见2290C - mergesort。
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        qsort(arr, n, sizeof(int), compare);

        int resultArr[n];

        for (int i = 0; i < (n + 1) / 2; i++)
        {
            resultArr[i] = arr[i * 2];
        }

        if (n % 2 == 0)
        {
            for (int i = (n + 1) / 2, j = n - 1; i < n; i++, j-=2)
            {
                resultArr[i] = arr[j];
            }
        }
        else
        {
            for (int i = (n + 1) / 2, j = n - 2; i < n; i++, j-=2)
            {
                resultArr[i] = arr[j];
            }
        }

        int count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (resultArr[i] > resultArr[i + 1] || resultArr[i] > resultArr[i - 1])
            {
                count++;
            }
        }
        
        if (n > 2)
        {
            printf("%d\n", count + 2);
        }
        else
        {
            printf("%d\n", n);
        }
       

        for (int i = 0; i < n; i++)
        {
            printf("%d ", resultArr[i]);
        }

        printf("\n");
    }

    return 0;
}