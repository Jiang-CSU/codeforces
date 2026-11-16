#include <stdio.h>
// #include <stdlib.h>

// 归并两个有序区间 [left, mid] 和 [mid + 1, right]
void merge(int arr[], int temp[], int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= right)
    {
        temp[k++] = arr[j++];
    }

    for (int p = left; p <= right; p++)
    {
        arr[p] = temp[p];
    }
}

void mergeSort(int arr[], int temp[], int left, int right)
{
    if (left >= right)
    {
        return;
    }

    int mid = left + (right - left) / 2;

    mergeSort(arr, temp, left, mid);
    mergeSort(arr, temp, mid + 1, right);

    merge(arr, temp, left, mid, right);
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
        int temp[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // 唯一的算法替换：qsort -> mergeSort
        mergeSort(arr, temp, 0, n - 1);

        int resultArr[n];

        for (int i = 0; i < (n + 1) / 2; i++)
        {
            resultArr[i] = arr[i * 2];
        }

        if (n % 2 == 0)
        {
            for (int i = (n + 1) / 2, j = n - 1; i < n; i++, j -= 2)
            {
                resultArr[i] = arr[j];
            }
        }
        else
        {
            for (int i = (n + 1) / 2, j = n - 2; i < n; i++, j -= 2)
            {
                resultArr[i] = arr[j];
            }
        }

        int count = 0;

        for (int i = 1; i < n - 1; i++)
        {
            if (resultArr[i] > resultArr[i + 1] ||
                resultArr[i] > resultArr[i - 1])
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