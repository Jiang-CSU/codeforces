#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n);

int main(void)
{
    int t;

    scanf("%d", &t);

    int prime[10001];
    int number = 2;
    int index = 0;
    while (index < 10001)
    {
        if (isPrime(number))
        {
            prime[index++] = number;
        }

        number++;
    }
    
    while (t--)
    {
        int n;
        scanf("%d", &n);

        for (int i = 0; i < n; i++)
        {
            printf("%lld ", 1LL * prime[i] * prime[i + 1]);
        }

        printf("\n");
    }

    return 0;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}